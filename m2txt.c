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

int main(int argc, char *argv[]){
    if (argc<2){
        printf("ERROR: Not enough input arguments\n");
        exit(EXIT_FAILURE);
    }

    FILE *inFile;
    char inputFile[50];
    strcpy(inputFile, argv[1]);

	int errnum;
    inFile  = fopen(inputFile, "r");
    if(inFile==NULL){
    	errnum = errno;
        fprintf(stderr, "%s\n", strerror(errnum));
        exit(EXIT_FAILURE);
    }
    fclose(inFile);

    return (0);
}