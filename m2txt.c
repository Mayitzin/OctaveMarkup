/**
 * @file m2txt.c
 * @brief M-file Parser
 *
 * Parser of M-files to get the raw text from comments and classify them.
 *
 * @author Mario Garcia (www.mayitzin.com)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>         // strlen, strcat, strcpy, strcmp, strtok, atof
#include <errno.h>

#define LINE_LENGTH 100     // Number of characters per line

char *defaultFile = "chordist.m";

int main(int argc, char *argv[]){
    // File declaration
    FILE *inFile;
    char inputFile[50];         // For File Name
    char str[LINE_LENGTH];      // For string of a single line

    // Handling of input arguments
    if (argc>1) {
        strcpy(inputFile, argv[1]);
    } else {
        printf("WARNING: Not enough input arguments\n");
        strcpy(inputFile, defaultFile);
        printf("Using default File: %s\n\n", inputFile);
    }

    // Read the file
    inFile  = fopen(inputFile, "r");
    if(inFile==NULL){
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    // Print contents of the file
    int line = 0, start = -1, end;
    int inBlock = 0;
    while( fgets(str, LINE_LENGTH, inFile) != NULL ) {
        if (str[0]=='%') {
            if (start<0) {
                start = line;
            }
            printf("%d\t%s", line, str);
            ++inBlock;
        } else {
            if (inBlock==1) {
                printf("[%2d] : ONE-LINER\n\n", start);
            }
            else if (inBlock>1) {
                end = line-1;
                printf("[%2d,%2d] : BLOCK\n\n", start, end);
            }
            inBlock = 0;
            start = -1;
        }
        ++line;
    }

    // Close File
    fclose(inFile);

    return (0);
}