// Write a program to open a file specified as an argument in the command line. 
// Change all the uppercase letters to the number 9 and all lower case letters 
// to the number 5. Output the result to another file named output.txt. Do not 
// use a command line argument for the output file.

// The input file will have one word per line.

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    // ./l input.txt as input
    FILE *inputFile = fopen(argv[1], "r"), *output = fopen("output.txt", "w");
    char c;
    

    while ((c = getc(inputFile)) != EOF)
    {
        if(isupper(c))
        {
            //fprintf(output, "9");
            fputc('9', output);
            //two ways of printing^
        }
        else if(islower(c))
        {
            //fprintf(output, "5");
            fputc('5', output);
            //two ways of printing^
        }
        
    }
    rewind(inputFile);    // read the file character by character

        // print each character into the output file one by one

        // if c is uppercase, output 9 to the file
        // if c is lowercase, output 5 to the file

    return EXIT_SUCCESS;
}