'''input
3
186
190
5
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

data = [str(i) for i in xrange(100010)]
s = ''.join(data)
for T in xrange(int(read())):
	write(s[int(read())])
	endl()