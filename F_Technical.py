import os

import subprocess
from pathlib import Path

def _dirSizeWalk(start_path):
    total_size =0
    try:
        for dirpath, dirnames, filenames in os.walk(start_path):
            for f in filenames:
                fp = os.path.join(dirpath, f)
                if not os.path.islink(fp):
                    total_size += os.path.getsize(fp)
    except os.error as e:
        pass

    return total_size / (1024*1024)
    pass

def _dirSizeWalk2(start_path):
    size = 0
    try:
        size = sum(os.path.getsize(f) for f in os.listdir(start_path) if os.path.isfile(f)) #######!!!!!!!!!!!!!!!
    except os.error as e:
        pass
    return size

def _dirSizeWalk3(path):
    memSize = 0
    try:
        memSize = subprocess.check_output(['du','-sh',path], stderr=subprocess.DEVNULL).split()[0].decode('utf-8')
    except subprocess.CalledProcessError as e:
        pass
    return memSize

def _dirSizeWalk4(path):
    total = 0
    try:
        for entry in os.scandir(path):
            if entry.is_file(follow_symlinks=False):
                total += os.path.getsize(path)
            else:
                total += os.stat(path).st_size
    except os.error as e:
        pass
    return total

def _dirSizeWalk5(path):
    memSize = 0
    try:
        memSize = sum(entry.stat().st_size for entry in os.scandir(path))
    except os.error as e:
        pass
    return memSize

def _dirSizeWalk6(path):
    root_directory = Path(path)
    return sum(f.stat().st_size for f in root_directory.glob('**/*') if f.is_file())










