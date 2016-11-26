'''input
2
SSSNEEEW
NESNWES
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

for T in xrange(int(read())):
	n, e, s, w = 0, 0, 0, 0
	for i in read():
		if i == 'N': n += 1
		elif i == 'E': e += 1
		elif i == 'S': s += 1
		else: w += 1
	x, y = min(n, s), min(e, w)
	n, s, e, w = n-x, s-x, e-y, w-y
	write('E'*e + 'N'*n + 'S'*s + 'W'*w)
	endl()