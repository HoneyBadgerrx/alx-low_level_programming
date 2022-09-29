#!/usr/bin/python3
import sys
def pal(a):
    b = str(a)
    c = b[::-1]
    for i in range(len(b)):
        if (b[i] != c[i]):
            return 0
    return (int(b))
for a in reversed(range(1, 1000)):
    for b in reversed(range(1, 1000)):
        if pal(a * b) != 0:
            print(pal(a * b))
            sys.exit(1)
