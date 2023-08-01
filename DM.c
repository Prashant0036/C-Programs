#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int b;
    printf("Enter your Percentile:");
    scanf("%d", &a);

    if (a>=60)
    {
        printf("Congrats! You have claimed First Division because you have %d percentile:", a);
    }
    else
    {
        printf("Yup! Don't think you are a looser because you have %d percentile.", a);
    }
    return 0;
    getch();
}