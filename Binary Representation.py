'''input
2
2
5
'''
 
#~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~#
 
from sys import stdin, stdout
from math import sqrt, floor, ceil, log
from collections import defaultdict, Counter
 
def read(): return stdin.readline().strip()
def write(x): stdout.write(str(x))
def endl(): write("\n")

for T in range(input()):
    n, bin = input(), ""
    while (n > 1):
        bin += str(n % 2)
        n /= 2
    bin += str(n)
    print "0" * (14 - len(bin)) + bin[::-1]