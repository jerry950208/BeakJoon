#!/usr/bin/env python3

N = int(input())

for i in range (N):
	A,B = map(int, input().split())
	print("Case #%d: %d + %d = %d" %(i+1,A,B,A+B))
