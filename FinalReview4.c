// #include <stdlib.h>
// #include <time.h>
// #include <stdio.h>

// int main(void)
// {
//     int roll, i, rollOutput;
//     int sidesArray[8] = {0};

//     printf("How many times do you want to roll an 8 sided die?");
//     scanf(" %d", &roll);
    
//     //rolling the die
//     srand(time(NULL));

//         for(i = 0; i < roll; i++)
//         {
//             rollOutput = rand() % 8; //gives me random numbers from 1 - 8
//             sidesArray[rollOutput]++;
//             //based on the rollOutput, it goes to that position and adds 1

//         }
        
//         for(i = 1; i < 9; i++)
//         {
//             //outputting the results
//             //i did i-1 so it can add index 0 since im starting at 1 its skipping it
//             //so its going back 1
//             //but with i its going 1 - 8 
//             printf("You rolled %d %d's\n", sidesArray[i-1], i);
//         }



//     return EXIT_SUCCESS;
// }

//above is without methods

#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int randomGen(int roll, int rollOutput, int sidesArray[]);
void outputting(int sidesArray[]);
int prompt(int roll);

int main(void)
{
    int roll, rollOutput;
    int sidesArray[8] = {0};
    
    roll = prompt(roll);
    rollOutput = randomGen(roll, rollOutput, sidesArray);
    outputting(sidesArray);

    return EXIT_SUCCESS;
}

int randomGen(int roll, int rollOutput, int sidesArray[])
{
    //rolling the die
    int i;
    srand(time(NULL));

        for(i = 0; i < roll; i++)
        {
            rollOutput = rand() % 8; //gives me random numbers from 1 - 8
            sidesArray[rollOutput]++;
            //based on the rollOutput, it goes to that position and adds 1

        }
        return rollOutput;
}
void outputting(int sidesArray[])
{
    int i;
    for(i = 1; i < 9; i++)
        {
            //outputting the results
            //i did i-1 so it can add index 0 since im starting at 1 its skipping it
            //so its going back 1
            //but with i its going 1 - 8 
            printf("You rolled %d %d's\n", sidesArray[i-1], i);
        }
}

int prompt(int roll)
{
    printf("How many times do you want to roll an 8 sided die?");
    scanf(" %d", &roll);

    return roll;
}