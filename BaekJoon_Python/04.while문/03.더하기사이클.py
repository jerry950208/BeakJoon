#!/usr/bin/env python3

N = int(input())
temp = N
cnt = 0

while 1:
	cnt = cnt + 1
	a = temp % 10
	b = temp / 10
	c = (temp % 10) * 10
	result = ((a + b) % 10) + c
	if result == N:
		print(cnt) 
		break
	else:
		continue

"""
N = int(input())
temp = N
cnt = 0
while 1:
	cnt = cnt + 1
	temp = (temp % 10) + (temp / 10) + (temp % 10) * 10
	if temp == N:
		print(cnt)
		break
"""
