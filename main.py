import curses, time
import keyboard as kb
import os, subprocess
from sys import exit
from C_Tab import C_Tab
from C_Render import C_Draw

screen = curses.initscr()   # start; init screen
screen.keypad(1)            # disable line input
curses.noecho()             # no line-buffer
curses.curs_set(0)          # stackoverflow said so

#INIT VARIABLES
termWidth     = os.get_terminal_size().columns  # terminal height
termHeight    = os.get_terminal_size().lines    # terminal width
currDir       = os.listdir('/')                 # currDir; listing of all items in the cwd
PathHistory   = ['/']                           # arr listing of current absolute path
dirSize       = len(currDir)                    # currDir size

cPos_origin   = [22,3]      # init cursor pos[x·y]
cPosPre       = [22,5]      # last cursor position[x·y]
cPos          = [22,3]      # current working cursor position[x·y]
cPos_relative = 0           # cursor position relative to currDir list

TAB_01 = C_Tab(20,30,screen)
BOX    = C_Draw

def _drawNode(dirname_):                    # _drawNode draws a given dir list[e.g. currDir]
    global listLength, currDir, dirSize     # and sorts it by directories → files
    nPos_x = 23; nPos_y = 3
    dirList = []
    fileList = []
    for item in os.listdir(dirname_):
        if os.path.isdir(os.path.join(dirname_,item)):      # check if item is dir and appends to dirList
            dirList.append(item)
        elif os.path.isfile(os.path.join(dirname_,item)):   # check if item is file and appends to fileList
            fileList.append(item)

    dirList.sort()          # sort and combine dirList and fileList ↓
    fileList.sort()
    currDir.clear()
    currDir += dirList
    currDir += fileList
    dirSize = len(currDir)  # update new directory size

    for y in range(0,len(dirList)): #print dirList first to buffer, followed by fileList
        if(y + nPos_y < termHeight - 1):
            screen.addstr(y + nPos_y, nPos_x, '/' + str(dirList[y]))
    for yy in range(0,len(fileList)):
        if(yy + nPos_y + len(dirList) < termHeight - 1): # if dir list fills screen → dont print anything
            screen.addstr(yy + nPos_y + len(dirList), nPos_x, str(fileList[yy]))        

def _setPath(injectDir):    # appends new working dir to PathHistory
    global PathHistory
    PathHistory.append(str(injectDir))
    PathHistory.append('/')

def _getPath():     # returns PathHistory-Arr as concatenated String
    global PathHistory
    newPath = ''
    for i in range(0,len(PathHistory)):
        newPath += str(PathHistory[i])
    return newPath

def _setCursor():   # draw cursor at new position and clear old cursor
    global cPosPre, cPos
    screen.addstr(cPos[1],cPos[0],'}')
    if cPosPre != cPos: 
        screen.addstr(cPosPre[1],cPosPre[0],' ')

def _cursorRelative(direction): #keeps track of cursor position rel. in currDir list
    global cPosPre, cPos, cPos_relative, currDir, cPos_origin
    if direction == 'up':
        cPos_relative -= 1
        if (cPos_relative < 0):
            cPos_relative = len(currDir) - 1
            cPos[1] = len(currDir) + 2
    elif direction == 'down':
        cPos_relative += 1
        if (cPos_relative > len(currDir) - 1):
            cPos_relative = 0
            cPos[1] = cPos_origin[1]
    elif direction == 'stop':
        cPos_relative = 0

def _debugLine():
    testPath = _getPath()
    screen.addstr(termHeight-10,termWidth-40,'                            ')
    screen.addstr(termHeight-11,termWidth-40,'                            ')
    screen.addstr(termHeight-10,termWidth-40,str(PathHistory))
    screen.addstr(termHeight-11,termWidth-40,str(testPath))

#-start up frame initialization ↓↓↓
####################################
BOX._drawBox(0,0,termWidth,termHeight,screen)
screen.addstr(0,3,'[dirViewer]')
_drawNode('/')

_setCursor()

TAB_01._draw()

screen.addstr(40,50,'')
screen.refresh()
####################################

keyLock = False
while True:

    _debugLine() ###remove later

    if kb.is_pressed('i') and not keyLock:
        cPosPre[0] = cPos[0]; cPosPre[1] = cPos[1]
        cPos[1] -= 1
        _cursorRelative('up')
        _setCursor()
        screen.refresh()
        keyLock = True

    elif kb.is_pressed('k') and not keyLock: 
        if cPos[1] != termHeight - 2:
            cPosPre[0] = cPos[0]; cPosPre[1] = cPos[1]
            cPos[1] += 1
            _cursorRelative('down')
            _setCursor()

#        elif cPos[1] == termHeight - 2 and cPos_relative[1] < len(currDir):

        screen.refresh()
        keyLock = True

    elif kb.is_pressed('esc'): break

    elif kb.is_pressed('j') and not keyLock:
        TAB_01._clear()
        PathHistory.pop(); PathHistory.pop()
        _drawNode(_getPath())
        cPosPre[0] = cPos[0]; cPosPre[1] = cPos[1]
        cPos[1] = cPos_origin[1]
        cPos_relative = 0
        _setCursor()
        screen.refresh()
        keyLock = True

    elif kb.is_pressed('l') and not keyLock:
        _setPath(str(currDir[cPos_relative]))
        TAB_01._clear()
        _drawNode(_getPath())
        cPosPre[0] = cPos[0]; cPosPre[1] = cPos[1]
        cPos[1] = cPos_origin[1]
        cPos_relative = 0
        _setCursor()
        screen.refresh()
        keyLock = True

    elif not kb.is_pressed('k') and not kb.is_pressed('i') and not kb.is_pressed('l') and not kb.is_pressed('j'):
        keyLock = False

    time.sleep(0.05)

curses.curs_set(1)
curses.nocbreak()
screen.keypad(0)
curses.echo()
curses.endwin
