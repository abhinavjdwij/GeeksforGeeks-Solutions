'''input
2
LIELIEILIEAMLIECOOL
LIELIEABCLIELIELIE
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

for T in xrange(int(read())):
	s = ' '.join(filter(lambda x: x != ' ', read().replace('LIE', ' ').split()))
	write(s)
	endl()