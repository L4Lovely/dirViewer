import os

class C_Tab:
    def __init__(self,Path,offset,width,screen,Render):
        self.cPosPre = [offset+2,3]
        self.cPos_origin = [offset+2,3]
        self.cPos =  [offset+2,3]
        self.cPos_relative = 0
        self.PathHistory = []
        self.PathHistory.append(Path)
        self.dirList    = []
        self.fileList   = []
        self.currDir    = []

        self.Render     = Render

        self.screen     = screen
        self.width      = width
        self.offset     = offset
        self.listOrigin = [offset + 3, 3]

    def _setPath(self, list):
        self.PathHistory.append(str(list))
        self.PathHistory.append('/')

    def _getPath(self):
        newPath = ''
        for i in range(0,len(self.PathHistory)):
                newPath += str(self.PathHistory[i])
        return newPath

    def _getPreviousPath(self):
        self.PathHistory.pop()
        self.PathHistory.pop()

    def _drawList(self):
        dirList    = self.dirList
        fileList   = self.fileList
        currDir    = self.currDir
        screen     = self.screen
        listOrigin = self.listOrigin

        self.dirList.clear()
        self.fileList.clear()
        self.Render._drawList(self._getPath(),dirList,fileList,currDir,listOrigin,screen,self.cPos_relative)

    def _drawSizeList(self):
        self.Render._drawSizeList(self.offset,self.listOrigin,self._getPath(),self.currDir,self.screen)
        pass

    def _drawTab(self):
        self.Render._drawTab(self.offset,self.width,self.screen)

    def _clearList(self):
        self.Render._clear(self.offset + 1, self.width, self.screen) # clear dir + file list
        self.Render._clear(self.offset + 12, self.width, self.screen) # clear size list

    def _setCursor(self):
        if not self.cPos == os.get_terminal_size().lines - 2:
            self.screen.addstr(self.cPosPre[1],self.cPosPre[0],' ')
        self.screen.addstr(self.cPos[1],self.cPos[0],'}')  

