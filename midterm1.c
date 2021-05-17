// Write a program that will take 2 files from the command line arguments 
// and display which file has more digits. Print the number of digits in each file.
// A digit is a number between 0 and 9 inclusive.

// //Sample output
// ./filecompare file1.txt file2.txt
// file1.txt contains more digits than file2.txt.
// file1.txt contains 350 digits.
// file2.txt contains 245 digits.

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int digitsInFile(FILE *inputFile);
int main(int argc, char *argv[])
{
    //take the input of what we are comparing
    FILE *firstFile = fopen(argv[1], "r"), *secondFile = fopen(argv[2], "r");
    int fileInc = digitsInFile(firstFile);
    int fileInc2 = digitsInFile(secondFile);

    //char c;
    //grab file one
    //check if its a number or letter, if its a number then its going to increment
    // while ((c = getc(firstFile)) != EOF)
    // {
    // //if its not a number we increment by 0 or we can just break
    // //increment for file 1
    //     if(isdigit(c))
    //     {
    //         fileInc++;
    //     }
    // }
    // rewind(firstFile);

    //grab the file two
    //check if its a number or letter, if its a number then its going to increment
    //if its not a number we increment by 0 or we can just break
    //we increment a counter for file2
    // while ((c = getc(secondFile)) != EOF)
    // {
    // //if its not a number we increment by 0 or we can just break
    // //increment for file 1
    //     if(isdigit(c))
    //     {
    //         fileInc2++;
    //     }
    // }
    // rewind(secondFile);

    //create an if statement check if one is bigger than the other
    //if file1 > file2
    //then file1 is bigger, otherwise file2 is bigger
    //file1 = 'name of first file'
    //file2 = 'name of second file'
    //print based on what if statment gave us

    if(fileInc > fileInc2)
    {
        printf("%s is the biggest file with %d digits\n", argv[1], fileInc);
    }
    else
    {
        printf("%s is the biggest file with %d digits\n", argv[2], fileInc2);
    }


    return EXIT_SUCCESS;
}

int digitsInFile(FILE *inputFile)
{
    char c;
    int digitInc = 0;
    while ((c = getc(inputFile)) != EOF)
    {
    //if its not a number we increment by 0 or we can just break
    //increment for file 1
        if(isdigit(c))
        {
            digitInc++;
        }
    }
    rewind(inputFile);
    return digitInc;
}