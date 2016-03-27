"""
Parser of M-files to get the raw text from comments and classify them.

History:
    27.03.2016. First implementation.

@author: Mario Garcia
www.mayitzin.com
"""

fileName = "chordist.m"

with open(fileName, 'r') as inputFile:
    text = inputFile.readlines()

print text