#include <stdio.h>
#include <conio.h>
void main()
{
    // Traverse a 2D Array
    int Arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", Arr[i][j]);
        }
        printf(" \n");
    }

// Storing Element in 2D array, given by user
    int Matrix[2][2];
    again:
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 2; b++)
        {

            printf("Enter [%d] [%d] element\n", a, b);
            scanf("%d", &Matrix[a][b]);
        }
    }

    printf(" Matrix Entered by you:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf(" %d", Matrix[i][j]);
        }

        printf("\n");
    }
int ch;
rechoice:
printf("For Confirm Press 1: \nFor Re-enter Press 2: \n");
scanf("%d",&ch);

if(ch==1){
goto next;

}
else if(ch==2){
goto again;

}
else{

    printf("Please enter valid choice:\n");
    goto rechoice;
}
next:
printf("Your Matrix has been submit succcessfully");

}