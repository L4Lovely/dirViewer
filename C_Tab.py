import curses
import os
from glyphlib import _lineCHA
from C_Render import C_Render
#
#   Class: C_pseudoTab
#   >this class' primary function is to designate
#   >tabs of varyiing widths as object-instances
#   >aswell as keep track of their contents and
#   >directory lists or other items
#       :: draw; hide; clear   
#

class C_Tab:
    def __init__(self, offset, width, screen):
        self.screen = screen
        self.offset = offset
        self.width  = width
        
        self.termY  = os.get_terminal_size().lines
        self.termX  = os.get_terminal_size().columns

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
            self.screen.addstr(self.termY - 1, self.offset, _lineCHA('dlTb'))
            self.screen.addstr(self.termY - 1, self.width + self.offset, _lineCHA('dlTb'))
        except curses.error as e:
            pass

    def _clear(self):
        for y in range(3, self.termY - 1):
            for x in range(self.offset + 1, self.width + self.offset):
                self.screen.addstr(y, x, ' ')
