'''input
2
x+5=2
x+10=20
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

for T in xrange(int(read())):
	a, b = map(int, ''.join(filter(lambda x: x != ' ', list(read()))).split('+')[1].split('='))
	write(b - a)
	endl()