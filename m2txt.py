"""
Parser of M-files to get the raw text from comments and classify them.

History:
    27.03.2016. First implementation.

@author: Mario Garcia
www.mayitzin.com
"""

import sys

fileName = "chordist.m"
inBlock = False
indices = []


# Read extra parameters
if len(sys.argv) >= 2:
    fileName = sys.argv[1]

# Create Output File
output = fileName[:-2]+".html"

with open(fileName, 'r') as inputFile:
    text = inputFile.readlines()

index =[]
for line in range(len(text)):
    if text[line].startswith("%"):
        if not inBlock: index = [line]
        inBlock = True
        print line,":\t",text[line].strip()[1:]
    else:
        if inBlock:
            index.append(line-1)
            indices.append(index)
        inBlock = False

print indices
print output