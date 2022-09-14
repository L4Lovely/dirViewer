import curses
import os
from glyphlib import _lineCHA

#
#   Class: C_pseudoTab
#   >this class' primary function is to designate
#   >tabs of varyiing widths as object-instances
#   >aswell as keep track of their contents and
#   >directory lists or other items
#       :: draw; hide; clear   
#

class C_pseudoTab:
    def __init__(self, offset, width, screen):
        self.screen = screen
        self.offset = offset
        self.width  = width

    def _draw(self):#draw tab
        headLine_yPos = 2
        try:
            for y in range(1, os.get_terminal_size().lines - 1): #draw left and right tab-borders
                self.screen.addstr(y, self.offset, _lineCHA('dlvt'))
                self.screen.addstr(y, self.offset + self.width, _lineCHA('dlvt'))      
        
            for x in range(1,self.width): #draw headline-separator
                self.screen.addstr(headLine_yPos, x + self.offset, _lineCHA('dlht'))
            self.screen.addstr(headLine_yPos, self.offset, _lineCHA('dlTl'))
            self.screen.addstr(headLine_yPos, self.width + self.offset, _lineCHA('dlTr'))

            #draw T-segments
            self.screen.addstr(0, self.offset, _lineCHA('dlTt'))
            self.screen.addstr(0, self.width + self.offset, _lineCHA('dlTt'))
            self.screen.addstr(os.get_terminal_size().lines - 1, self.offset, _lineCHA('dlTb'))
            self.screen.addstr(os.get_terminal_size().lines - 1, self.width + self.offset, _lineCHA('dlTb'))
        except curses.error as e:
            pass

    def _clear(self):
        headLine_offset = 2
        for y in range(headLine_offset + 1, os.get_terminal_size().lines - 1):
            for x in range(self.offset + 1, self.offset + self.width - 1):
                self.screen.addstr(y, x, ' ')
