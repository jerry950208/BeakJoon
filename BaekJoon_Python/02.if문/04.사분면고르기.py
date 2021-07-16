#!/usr/bin/env python3

X,Y = map(int, input().split())
#X = int(input())
#Y = int(input())

if X > 0:
        if Y > 0:
                print(1)
        else:
                print(4)
else:
        if Y > 0:
                print(2)
        else:
                print(3)
