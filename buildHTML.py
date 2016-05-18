"""
Buid a simple HTML page.

@author: Mario Garcia
www.mayitzin.com
"""

import sys

def addTitle(title):
	string = "<title>"+title+"</title>"
	return string


fileName = "chordist.m"
output = fileName[:-2]+".html"


# Read extra parameters
if len(sys.argv) >= 2:
    fileName = sys.argv[1]
    output = fileName
    if fileName[-4:]!="html":
    	output += ".html"

print output