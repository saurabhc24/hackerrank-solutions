#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    return " ".join([x.capitalize() for x in s.split(" ")]) #first making list of string using split(), then using method capitalize to capitalize the first letter of each list element string

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
