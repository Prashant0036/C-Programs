#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, gusses, nogusses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Enter a Number between (1-100) :\n ");
        scanf("%d", &gusses);
    
    if(number<gusses)
    {
        printf("Please! Enter a lower value\n");
    }

    else if (number>gusses)
    {
        printf("Please! Enter a higher value\n");
    }
    else {

        printf("Congrats!You gussed it in %d attempts!\n",nogusses);
    }

     nogusses++;
    }
    while(gusses!=number);
   
    return 0;
}