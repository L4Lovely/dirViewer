class C_Cursor:
    def __init__(self,screen):
        self.screen = screen
        self.ypos = 0
        self.xpos = 0
        self.yposLast = 0
        self.xposLast = 0

        self.cursorCHA = '>'

    def _Set(self, direction):
        
        self.ypos += 1 if direction == 'down' else pass
        self.ypos -= 1 if direction == 'up'   else pass


        self.screen.addstr(self.yposLast, self.xposLast, ' ')
        self.screen.addstr(self.ypos, self.xpos, self.cursorCHA)


