#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

void magicNum();
int main(void)
{
    //insert a number form 1 - 10 inclusive
    //we will add, sub, divide, multiply
    //ask guest to guess the number being summed with
    magicNum();
    
}

void magicNum()
{
    int userinput;
    int magicNumber = 5;

    printf("Insert a number 1 - 10 inclusively\n");
    scanf(" %d", &userinput);

    if(userinput < 1 || userinput > 10)
    {
        puts("Error, input a number from 1 - 10\n");
    }
    else
    {
        printf("\nYou entered the number %d\n", userinput);
        
        //add
        puts("\nAdding:");
        printf(" %d + magic number = %d\n", userinput, userinput + magicNumber);

        //multiply
        puts("\nMultiplying:");
        printf(" %d * magic number = %d\n", userinput, userinput * magicNumber);

        //subtract
        puts("\nSubtract:");
        printf(" %d - magic number = %d\n", userinput, userinput - magicNumber);
        //guess the magic number

        puts("\nGuess the magic number?");
        scanf(" %d", &userinput);

        if(userinput == magicNumber)
        {
            puts("You are correct!\n");
        }
        else
        {
            puts("You lose\n");
        }
    }
}