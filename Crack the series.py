'''input
2
4
7
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

def pre():
	ans = [0]*12
	ans[0] = ans[1] = 2
	for i in xrange(2, 12):
		ans[i] = ans[i-2]**2 if (i % 2 == 0) else ans[i-2]**3
	return ans

ans = pre()
for T in xrange(int(read())):
	write(ans[int(read())-1])
	endl()