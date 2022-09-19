from C_Render import C_Draw

class C_Tab:
    def __init__(self, cPos_relative,Path,offset,width,screen):
        self.cPos_relative = cPos_relative
        self.PathHistory = []
        self.PathHistory.append(Path)
        self.dirList    = []
        self.fileList   = []
        self.currDir    = []

        self.Render     = C_Draw()

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
        self.Render._drawList(self._getPath(),dirList,fileList,currDir,listOrigin,screen)
#die angepasste C_Render hier benutzten und das darüber erstmal auskommentieren wenn das hier drunter funktioniert
    def _drawList(self):
        dirList    = self.dirList
        fileList   = self.fileList
        currDir    = self.currDir
        screen     = self.screen
        listOrigin = self.listOrigin

        self.dirList.clear()
        self.fileList.clear()
        self.Render._drawList(self._getPath(),dirList,fileList,currDir,listOrigin,screen)
        
    def _drawTab(self):
        self.Render._drawTab(self.offset,self.width,self.screen)

    def _clearList(self):
        self.Render._clear(self.offset,self.width,self.screen)
