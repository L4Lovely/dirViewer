from ast import Try
import curses
from re import I
import time
import keyboard as kb
import subprocess
import os
from pynput.keyboard import Key, Listener   
from sys import exit
from C_Render import C_Draw
from C_Tab import C_Tab

tab = 0
screen = curses.initscr() # start
screen.keypad(1)
curses.noecho()           # no line-buffer
curses.curs_set(0)

#terminal größe
termWidth  = os.get_terminal_size().columns
termHeight = os.get_terminal_size().lines


#Object-Initialization
Render = C_Draw()
WINDOWS = []
TABS = []
TABS.append(C_Tab('/',15,round(termWidth / 2 - 15),screen,Render))

#erste mal alles malen
TABS[tab].cPos_origin = [16,3]
TABS[tab].cPos        = [16,3]
TABS[tab].cPosPre     = [1,1]
TABS[tab]._cursorDraw(screen)
Render._drawBox(0,0,termWidth,termHeight,screen)    #draw terminal border

TABS[tab]._drawTab()
TABS[tab]._drawList()
screen.refresh()

def DEBUG():
    screen.addstr(14,14,str(len(Render.currDirr)))
    screen.addstr(15,14,str(TABS[tab].cPos_relative))
    screen.addstr(16,14,str(termHeight-1))
#erkennen von tastendruck

def on_press(key):
    global tab
    #sobald cPos_relative und cPos jeweils unter 10 geht wird die zahl mal 10 genommen
    if key == Key.up and TABS[tab].cPos_relative != 0:
        if (TABS[tab].cPos[1]> 3):
            TABS[tab].cPosPre[0] = TABS[tab].cPos[0]; TABS[tab].cPosPre[1] = TABS[tab].cPos[1]
            TABS[tab].cPos[1] -= 1
            TABS[tab].cPos_relative -= 1
            TABS[tab]._setCursor(screen)
            screen.addstr(15,14,str(TABS[tab].cPos_relative))
            screen.addstr(14,14,str(TABS[tab].cPos[1]))
            screen.refresh()
        else:
            TABS[tab].cPos_relative -=1
            TABS[tab]._clearList()
            TABS[tab]._drawList()
            screen.refresh()

    elif key==Key.down:
        if (TABS[tab].cPos[1] +1 < termHeight -1 and TABS[tab].cPos[1]< len(Render.currDirr)+2):    
            TABS[tab].cPosPre[0] = TABS[tab].cPos[0]; TABS[tab].cPosPre[1] = TABS[tab].cPos[1]
            TABS[tab].cPos[1] +=1
            TABS[tab].cPos_relative += 1
            TABS[tab]._setCursor(screen)
            screen.refresh()
        elif(TABS[tab].cPos_relative +1< len(Render.currDirr)):
            TABS[tab].cPos_relative +=1
            TABS[tab]._clearList()
            TABS[tab]._drawList()
            screen.refresh()
        else:
            pass

    elif key==Key.right and TABS[tab].cPos_relative + 1 <= len(TABS[tab].dirList):
        # PERMISSION CHEQUÉ REQUIRED -> OS.STAT || OS.ACCESS (RETURNS BOOL???)
        TABS[tab]._clearList()
        TABS[tab]._setPath(TABS[tab].dirList[TABS[tab].cPos_relative])
        TABS[tab].cPosPre[0] = TABS[tab].cPos[0]; TABS[tab].cPosPre[1] = TABS[tab].cPos[1]
        TABS[tab].cPos[1] = TABS[tab].cPos_origin[1]
        TABS[tab].cPos_relative = 0
        TABS[tab]._setCursor(screen)
        TABS[tab]._drawList()
        #Render._drawList(TABS[tab].getPath(),screen)
        screen.refresh()

    elif key ==Key.left and TABS[tab]._getPath() != '/':
        TABS[tab]._clearList()
        TABS[tab]._getPreviousPath()
        TABS[tab].cPosPre[0] = TABS[tab].cPos[0]; TABS[tab].cPosPre[1] = TABS[tab].cPos[1]
        TABS[tab].cPos[1] = TABS[tab].cPos_origin[1]
        TABS[tab].cPos_relative = 0
        TABS[tab]._setCursor(screen)
        TABS[tab]._drawList()
        screen.refresh()
    elif key == Key.f2:
        try:
            if TABS[1]:
                TABS[tab]._cursorDel(screen)
                tab = 1
                TABS[tab]._cursorDraw(screen)
                screen.refresh()
        except IndexError:
            TABS.append(C_Tab('/',TABS[0].width + TABS[0].offset, termWidth - (TABS[0].width + TABS[0].offset) - 10,screen,Render))
            TABS[1]._drawTab()
            TABS[1]._drawList()
            TABS[tab]._cursorDel(screen)
            tab = 1
            TABS[tab]._cursorDraw(screen)
            screen.refresh()
    elif key == Key.f1:
        if tab == 1:
            TABS[tab]._cursorDel(screen)
            tab = 0
            TABS[tab]._cursorDraw(screen)
            screen.refresh()
        else:
            pass
    #ein erster versuch vom löschen des 2 tabs
    # elif key == Key.esc and TABS[1]:
    #     Render._clear(0,termWidth ,screen)
    #     tab = 0
    #     TABS.pop()
    #     TABS[tab]._drawTab()
    #     TABS[tab]._drawList()
    #     TABS[tab]._cursorDraw(screen)
    #     screen.refresh()

with Listener(
        on_press=on_press
        ) as listener:
    listener.join()

curses.curs_set(1)
curses.nocbreak()
screen.keypad(0)
curses.echo()
curses.endwin
