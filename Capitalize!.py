#!/bin/python3

import math
import os
import random
import re
import sys
import string
def solve(s):
    count=0
    flag=0
    k=len(s)
    d=s.title()
    for i in d:
        count+=1
        if(i.isdigit()):
            if(count==k):
                break
            else:
                l=d.replace(d[count],d[count].lower())
                flag=1
    if(flag==0):
        return d
    else:
        return l
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
