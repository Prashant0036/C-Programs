#include <stdio.h>
#include <conio.h>
int main()
{
    int nod;
    printf("enter a number between 1 to 7:\n");
    scanf("%d", &nod);

    switch (nod)
    {
    case 1:

        printf("monday\n");

        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6 :
        printf("saturday\n");
        break;
    
       

    default:
        printf("Please Enter in valid format: ");
        break;
    }
    return 0;
}
