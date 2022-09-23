import time
import os
from F_Technical import _dirSizeWalk
from F_Technical import _dirSizeWalk2
from F_Technical import _dirSizeWalk3
from F_Technical import _dirSizeWalk4
import curses

screen = curses.initscr()
rootDir = os.listdir('/')

def _func():
    start = time.perf_counter()
    arr = []
    for i in range(0,len(os.listdir('/'))):
        screen.addstr(i + 3, 40, str(_dirSizeWalk2(rootDir[i])))
    screen.refresh()
    print(f"Completed Execution in {time.perf_counter() - start} seconds")


_func()
