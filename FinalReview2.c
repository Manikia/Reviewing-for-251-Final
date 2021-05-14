#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    char userinput, q;
    int A = 0, B = 0, C = 0, D = 0, F = 0, num = 0;
    double counter = 0, counterAverage;

    while(userinput != 'q')
    {
        printf("Enter a letter grade (press q to quit)\n");
        scanf(" %c", &userinput);

        switch (userinput)
        {
            case 'A': 
            case 'a':
            {
                A++;
                counter = counter + 4.0;
                break;
            }
            case 'B': 
            case 'b':
            {
                B++;
                counter = counter + 3.0;
                break;
            }
            case 'C': 
            case 'c':
            {
                C++;
                counter = counter + 2.0;
                break;
            }
            case 'D': 
            case 'd':
            {
                D++;
                counter = counter + 1.0;
                break;
            }
            case 'F': 
            case 'f':
            {
                F++;
                counter = counter + 0.0;
                break;
            }
            case 'q':
            {
                break;
            }
            default:
            {
                puts("Not a valid input\n");
                break;
            }
            break;
        }
    }

    num = A + B + C + D + F;
    counterAverage = counter/(double)num;
    printf("There are %d A's, %d B's, %d C's, %d D's, and %d F's\n", A, B, C, D, F);
    printf("The class average is %fl.2", counterAverage);

    return EXIT_SUCCESS;
}