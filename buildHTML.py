"""
Buid a simple HTML page.

@author: Mario Garcia
www.mayitzin.com
"""

import sys

def addTitle(title):
    string = "<title>"+title+"</title>\n"
    return string

def addHead(title):
	string = "<head>\n"+addTitle(title)+"</head>\n"
	return string

def addParagraph(contents):
	string = "<p>"+contents+"</p>\n"
	return string

def addBody(contents):
	string = "<body>\n"+addParagraph(contents)+"</body>\n"
	return string

def buildHTML(contentHead, contentBody):
	openingTag = "<html>"
	closingTag = "</html>"
	string = openingTag+"\n"+contentHead+contentBody+closingTag
	return string


fileName = "chordist.m"
outFile = fileName[:-2]+".html"


# Read extra parameters
if len(sys.argv) >= 2:
    fileName = sys.argv[1]
    outFile = fileName
    if fileName[-4:]!="html":
        outFile += ".html"

print outFile+":\n"

contentHead = addHead("My Title")
contentBody = addBody("A standard Text")
contentHTML = buildHTML(contentHead, contentBody)

print contentHTML