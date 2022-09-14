import os

class C_Draw:
    #TAB DRAWING
    def _drawTag(offset,width,screen):#draw tab
        headLine_yPos = 2
        try:
            for y in range(1, os.get_terminal_size().lines - 1): #draw left and right tab-borders
                screen.addstr(y, offset, _lineCHA('dlvt'))
                screen.addstr(y, sellgf.offset + .width, _lineCHA('dlvt'))      
        
            for x in range(1,width): #draw headline-separator
                screen.addstr(headLine_yPos, x + self.offset, _lineCHA('dlht'))
            screen.addstr(headLine_yPos, self.offset, _lineCHA('dlTl'))
            screen.addstr(headLine_yPos, self.width + self.offset, _lineCHA('dlTr'))

            #draw T-segments
            screen.addstr(0, self.offset, _lineCHA('dlTt'))
            screen.addstr(0, self.width + self.offset, _lineCHA('dlTt'))
            screen.addstr(os.get_terminal_size().lines - 1, self.offset, _lineCHA('dlTb'))
            screen.addstr(os.get_terminal_size().lines - 1, self.width + self.offset, _lineCHA('dlTb'))
        except curses.error as e:
            pass
 
    def _clear(:
        headLine_offset = 2
        for y in range(headLine_offset + 1, os.get_terminal_size().lines - 1):
            for x in range(offset + 1, self.offset + self.width - 1):
