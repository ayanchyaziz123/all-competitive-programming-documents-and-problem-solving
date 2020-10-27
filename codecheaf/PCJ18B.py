import sys
#sys.stdin = open("input.txt", "r")
# cook your dish here
for time in range(int(input())):
	n,sum_ = int(input()),0
	for i in range(n,0,-2):
		sum_ += i**2
	print(sum_)