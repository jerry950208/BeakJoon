#!/usr/bin/env python3

H,M = map(int, input().split())
#H = int(input())
#M = int(input())
"""
시간이 0이면 23으로 바꿔주기
분이 45분 보다 크면 -45해주기
분이 45분 보다 작으면 분 -15해주고 시간 -1 하기
"""
if M >= 45:
	print(H,M-45)
else:
	if H == 0:
		print(23,M+15)
	else:
		print(H-1,M+15)
