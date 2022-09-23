import os
import curses
from glyphlib import _lineCHA
from F_Technical import _dirSizeWalk4

class C_Draw(object):
    def __init__(self):
        self.start = 0

    def _drawList(self,dirname_,dirList,fileList,currDir,listOrigin,screen,cPos_R):
        termHeight = os.get_terminal_size().lines

        for item in os.listdir(dirname_):
            if os.path.isdir(os.path.join(dirname_,item)):
                if item != 'proc':
                    dirList.append('/'+item)
            elif os.path.isfile(os.path.join(dirname_,item)):
                fileList.append(item)

        dirList.sort()
        fileList.sort()
        currDir.clear()
        currDir += dirList
        currDir += fileList

        if (cPos_R > termHeight-5):
            self.start = cPos_R - termHeight+5
        elif(self.start>0):
            self.start -=1

        x = 0
        for y in range(self.start,len(currDir)):
            if (x + listOrigin[1] < termHeight -1):
                Item = str(currDir[y])
                Item = str(y) + ' - ' + Item
                Item = (Item[:15] + '..') if len(Item) > 17 else Item
                screen.addstr(x + listOrigin[1],listOrigin[0],Item)
                x += 1

    def _drawSizeList(self,offset,listOrigin,absw_path,currDir,screen): #absw_path :: absolute working path
        try:
            sizeList = []
            for j in range(0,len(currDir)):
                absw_path += currDir[j]
                sizeList.append(_dirSizeWalk4(absw_path))
                absw_path = ''
                screen.addstr(listOrigin[1] + j, listOrigin[0] + offset + 6, str(sizeList[j])[:7])
        except curses.error as e:
            pass
        #iterate currDir list // append each index value to absw_path && call F_Technical._dirSizeWalk()


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
        
            #draw headline-separator
            for x in range(1,width):
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
