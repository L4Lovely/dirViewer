import curses
from re import I
import time
import keyboard as kb
import subprocess
import os
from pynput.keyboard import Key, Listener   
from cursor import cursor
from sys import exit
from C_Render import C_Draw
from C_Tab import C_Tab

screen = curses.initscr() # start
screen.keypad(1)
curses.noecho()           # no line-buffer
curses.curs_set(0)

#terminal größe
termWidth  = os.get_terminal_size().columns
termHeight = os.get_terminal_size().lines

#Object-Initialization
cursor = cursor()
Render = C_Draw()
WINDOWS = []
TABS = []
TABS.append(C_Tab(cursor.cPos_relative,'/',15,round(termWidth / 2 - 15),screen))

#erste mal alles malen
cursor.cPos_origin = [16,3]
cursor.cPos        = [16,3]
cursor.cPosPre     = [1,1]
cursor._setCursor(screen)
Render._drawBox(0,0,termWidth,termHeight,screen)    #draw terminal border

TABS[0]._drawTab()
TABS[0]._drawList()
screen.refresh()

def DEBUG():
    pass
#erkennen von tastendruck
def on_press(key):
    if key == Key.up and cursor.cPos_relative != 0:
        cursor.cPosPre[0] = cursor.cPos[0]; cursor.cPosPre[1] = cursor.cPos[1]
        cursor.cPos[1] -= 1
        cursor.cPos_relative -= 1
        cursor._setCursor(screen)
        
        DEBUG()
        screen.refresh()

    elif key==Key.down and cursor.cPos[1] != termHeight - 2 and cursor.cPos[1] != len(TABS[0].currDir)+2:
        cursor.cPosPre[0] = cursor.cPos[0]; cursor.cPosPre[1] = cursor.cPos[1]
        cursor.cPos[1] +=1
        cursor.cPos_relative += 1
        cursor._setCursor(screen)
        
        DEBUG()
        screen.refresh()

    elif key==Key.right and cursor.cPos_relative + 1 <= len(TABS[0].dirList):
        # PERMISSION CHEQUÉ REQUIRED -> OS.STAT || OS.ACCESS (RETURNS BOOL???)
        TABS[0]._clearList()
        TABS[0]._setPath(TABS[0].dirList[cursor.cPos_relative])
        cursor.cPosPre[0] = cursor.cPos[0]; cursor.cPosPre[1] = cursor.cPos[1]
        cursor.cPos[1] = cursor.cPos_origin[1]
        cursor.cPos_relative = 0
        cursor._setCursor(screen)
        TABS[0]._drawList()
        #Render._drawList(TABS[0].getPath(),screen)
        DEBUG()
        screen.refresh()

    elif key ==Key.left and TABS[0]._getPath() != '/':
        TABS[0]._clearList()
        TABS[0]._getPreviousPath()
        cursor.cPosPre[0] = cursor.cPos[0]; cursor.cPosPre[1] = cursor.cPos[1]
        cursor.cPos[1] = cursor.cPos_origin[1]
        cursor.cPos_relative = 0
        cursor._setCursor(screen) 
        TABS[0]._drawList()
        DEBUG()
        screen.refresh()
    elif key == Key.f2:
        try:
            if TABS[1]:
                pass
        except IndexError:
            TABS.append(C_Tab(0,'/',TABS[0].width + TABS[0].offset, termWidth - (TABS[0].width + TABS[0].offset) - 10,screen))
            TABS[1]._drawTab()
            TABS[1]._drawList()
            screen.refresh()

with Listener(
        on_press=on_press
        ) as listener:
    listener.join()

curses.curs_set(1)
curses.nocbreak()
screen.keypad(0)
curses.echo()
curses.endwin
