import curses
import os
from glyphlib import _lineCHA

#init
screen = curses.initscr()

def _drawConsoleBorder():
    termWidth  = os.get_terminal_size().columns 
    termHeight = os.get_terminal_size().lines
    currDir = os.listdir('/')

    xlen = termWidth
    ylen = termHeight
    
    for y in range(1,termHeight - 1):
        screen.addstr(y, 0, _lineCHA('dlvt'))
        screen.addstr(y, termWidth - 1, _lineCHA('dlvt'))
    for x in range(1,termWidth - 1):
        screen.addstr(termHeight - 1, x, _lineCHA('dlht'))
        screen.addstr(0, x, _lineCHA('dlht'))

    screen.addstr(0, 0, _lineCHA('dltl'))
    screen.addstr(0, termWidth - 1, _lineCHA('dltr'))
    screen.addstr(termHeight - 1, 0, _lineCHA('dlbl'))
    try:
        screen.addstr(termHeight - 1, termWidth - 1, _lineCHA('dlbr'))
    except curses.error as e:
        pass
 
def _drawH_rod(direction, length, offx, offy):
    if(direction == 'vt'):
        for y in range(1,length - 1):
            screen.addstr(y + offy, offx, _lineCHA('dlvt'))
        screen.addstr(offy, offx, _lineCHA('dlTt'))
        screen.addstr(y + offy, offx, _lineCHA('dlTb'))
    if(direction == 'ht'):
        for x in range(1,length - 1):
            screen.addstr(offy, x + offx, _lineCHA('dlht'))
        screen.addstr(offy, offx, _lineCHA('dlTl'))
        screen.addstr(offy, x + offx, _lineCHA('dlTr'))
