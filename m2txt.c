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

int main(int argc, char *argv[]){
    if (argc<2){
        printf("ERROR: Not enough input arguments\n");
        exit(1);
    }

    FILE *inFile;
    char inputFile[50];
    strcpy(inputFile, argv[1]);

    printf("Input File: %s\n", inputFile);

    return (0);
}