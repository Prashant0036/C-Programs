#include <stdio.h>
#include <conio.h>
int main()
{

    int a;
    int b;
    int c;
    int z = (a+b+c)/3;
    printf("Enter your Marks:");
    scanf("%d" "%d" "%d", &a ,&b,&c);

    if (a>=90 && a<=100)
    {
        printf("Your Grade is A ", a);
    }
    else if (a >= 80 && a < 90)
    {
        printf("B");
    }

    else if (a >= 70 && a < 80)

    {

        printf("C");
    }

    else if (a >= 60 && a <70)
    {

        printf("D");
    }
    else if (a>=50 && a<60)
    {

        printf("E");
    }



else 
{
printf("F",a);
}
    return 0;
}