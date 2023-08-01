#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int number, gusses, nogusses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {

        printf("Please! Guess a number between 1 to 100  :\n");
        scanf("%d", &gusses);
        if (number < gusses)
        {
            printf("Lower number please!\n");
        }
        else if (number > gusses)
        {

            printf("Higher number please!\n");
        }

        else {

            printf("Congrats! You gussed it in %d attempts\n",nogusses);
        }
        nogusses++;
    }
    while(number!=gusses);

    return 0;
}