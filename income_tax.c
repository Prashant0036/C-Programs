#include <stdio.h>
#include <conio.h>
int main()
{
    float income;
    float a, b, c, d;

    printf("Enter Your Annual income:");
    scanf("%f", &income);

    a = ((income-250000) * 5) / 100;
    b = ((income-250000) * 20) / 100;
    c = ((income-250000) * 30) / 100;
    d = (income * 0);

    if (income >= 250000 && income < 500000)
    {

        printf(" Your Income Tax is %f", a);
    }

    else if (income >= 500000 && income < 1000000)
    {

        printf("Your Income Tax is %f", b);
    }

    else if (income >= 1000000)
    {

        printf("your income Tax is %f",c);
    }

    else if (income < 250000)
    {

        printf(" Your Income Tax is %f", d);
    }
    else
    {
        printf(" Please Enter a valid Annual Income");
    }

    return 0;
}