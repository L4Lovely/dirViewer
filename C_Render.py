import os
import curses
from glyphlib import _lineCHA

class C_Render:
    #TAB DRAWING
    def _drawTab(offset,width,screen):#draw tab
        headLine_yPos = 2
        try:
            for y in range(1, os.get_terminal_size().lines - 1): #draw left and right tab-borders
                screen.addstr(y, offset, _lineCHA('dlvt'))
                screen.addstr(y, offset + width, _lineCHA('dlvt'))      
        
            for x in range(1,width): #draw headline-separator
                screen.addstr(headLine_yPos, x + offset, _lineCHA('dlht'))
            screen.addstr(headLine_yPos, offset, _lineCHA('dlTl'))
            screen.addstr(headLine_yPos, width + offset, _lineCHA('dlTr'))

            #draw T-segments
            screen.addstr(0, offset, _lineCHA('dlTt'))
            screen.addstr(0, width + offset, _lineCHA('dlTt'))
            screen.addstr(os.get_terminal_size().lines - 1, offset, _lineCHA('dlTb'))
            screen.addstr(os.get_terminal_size().lines - 1, width + offset, _lineCHA('dlTb'))
        except curses.error as e:
            pass

    def _drawBox(xoff,yoff,xlen,ylen,screen):
        try:     
            for y in range(1, ylen - 1):
                screen.addstr(yoff + y, xoff, _lineCHA('dlvt'))
                screen.addstr(yoff + y, xoff + xlen - 1, _lineCHA('dlvt'))
            for x in range(1, xlen - 1):
                screen.addstr(yoff, xoff + x, _lineCHA('dlht'))
                screen.addstr(yoff + ylen - 1, xoff + x, _lineCHA('dlht'))
            screen.addstr(yoff, xoff, _lineCHA('dltl'))
            screen.addstr(yoff, xoff + xlen - 1, _lineCHA('dltr'))
            screen.addstr(yoff + ylen - 1, xoff, _lineCHA('dlbl'))
            screen.addstr(yoff + ylen - 1, xoff + xlen - 1, _lineCHA('dlbr'))
        except curses.error as e:
            pass

    def _clearRect(xoff,yoff,xlen,ylen,screen):
        try:
            for y in range(yoff, ylen):
                for x in range(xoff, xlen):
                    screen.addstr(yoff + y, xoff + x, '0')
        except curses.error as e:
            pass
