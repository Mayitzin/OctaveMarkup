"""
Parser of M-files to get the raw text from comments and classify them.

History:
    27.03.2016. First implementation.

@author: Mario Garcia
www.mayitzin.com
"""

fileName = "chordist.m"
block = False
indices = []

with open(fileName, 'r') as inputFile:
    text = inputFile.readlines()

for line in text:
    index = []
    if line.startswith("%"):
        if block is False: index.append(text.index(line))
        block = True
        print text.index(line),":\t",line.strip()
    else:
        if block is True: index.append(text.index(line))
        block = False
    indices.append(index)

# print indices