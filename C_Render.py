import os
import curses
from glyphlib import _lineCHA

class C_Draw(object):
    
    def _drawList(self,dirname_,dirList,fileList,currDir,listOrigin,screen):
        termHeight = os.get_terminal_size().lines

        for item in os.listdir(dirname_):
            if os.path.isdir(os.path.join(dirname_,item)):
                dirList.append(item)
            elif os.path.isfile(os.path.join(dirname_,item)):
                fileList.append(item)

        dirList.sort()
        fileList.sort()
        currDir.clear()
        currDir += dirList
        currDir += fileList
#hier muss man noch etwas tun(nur eine for-schleifen mit currDir)
        for y in range(0,len(dirList)):
            if(y + listOrigin[1] < termHeight - 1):
                Item = str(dirList[y])
                Item = (Item[:15] + '..') if len(Item) > 17 else Item # cut list string to length
                
                screen.addstr(y + listOrigin[1], listOrigin[0], '/' + Item)

        for yy in range(0,len(fileList)):
            if(yy + listOrigin[1] + len(dirList) < termHeight - 1): 
                Item = str(fileList[yy])
                Item = (Item[:15] + '..') if len(Item) > 17 else Item # cut list string to length
                
                screen.addstr(yy + listOrigin[1] + len(dirList), listOrigin[0], Item)
    
    def _drawBox(self, xoff,yoff,xlen,ylen,screen):
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
    
    def _drawTab(self,offset,width,screen):#draw tab
        headLine_yPos = 2
        try:
            for y in range(1, os.get_terminal_size().lines - 1): #draw left and right tab-borders
                screen.addstr(y, offset, _lineCHA('dlvt'))
                screen.addstr(y, offset + width, _lineCHA('dlvt'))      
        
            for x in range(1,width): #draw headline-separator
                screen.addstr(headLine_yPos, offset + x, _lineCHA('dlht'))
                screen.addstr(headLine_yPos, offset, _lineCHA('dlTl'))
                screen.addstr(headLine_yPos, offset + width, _lineCHA('dlTr'))

            #draw T-segments
                screen.addstr(0, offset, _lineCHA('dlTt'))
                screen.addstr(0, offset + width, _lineCHA('dlTt'))
                screen.addstr(os.get_terminal_size().lines - 1, offset, _lineCHA('dlTb'))
                screen.addstr(os.get_terminal_size().lines - 1, width + offset, _lineCHA('dlTb'))
            
            for y in range(3, os.get_terminal_size().lines - 1): # draw in-tab separator
                screen.addstr(y , offset + 21, _lineCHA('dlvt'))
        except curses.error as e:
            pass

    def _clear(self,offset,width,screen):
        for y in range(3, os.get_terminal_size().lines - 1):
            for x in range(offset + 1, offset + 20):
                screen.addstr(y, x, ' ')
