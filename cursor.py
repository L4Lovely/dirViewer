class cursor(object):
    def __init__(self):
        self.cPosPre = [1,1]
        self.cPos_origin = [1,1]
        self.cPos =  [1,1]
        self.cPos_relative = 0
    def _setCursor(self,screen):
        screen.addstr(self.cPosPre[1],self.cPosPre[0],' ')
        screen.addstr(self.cPos[1],self.cPos[0],'}')
