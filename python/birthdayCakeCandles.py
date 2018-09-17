import math
import os
import random
import re
import sys

def findValue(key,lst):
    c = 0
    for i in range(len(lst)):
        if lst[i] == key:
            c+=1
    return c



# Complete the birthdayCakeCandles function below.
def birthdayCakeCandles(ar):
    max_val = max(ar)
    count = findValue(max_val,ar)
    print(count)
        

if __name__ == '__main__':
    arr = [4,1,2,4,3,4]
    birthdayCakeCandles(arr)