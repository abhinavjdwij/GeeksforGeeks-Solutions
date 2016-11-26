'''input
2
1001
100
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

for T in range(input()):
    s = raw_input().rstrip()
    odd, even = 0, 0
    for n, i in enumerate(s):
        if i == '1':
            if (n % 2): odd += 1
            else: even += 1
    write(int(abs(even-odd) % 3 == 0))
    endl()