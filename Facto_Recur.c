#include <stdio.h>
#include <conio.h>
// Calculate Factorial using Recursion
// Recursion Function Definition
int facto(int num)
{
    if (num == 1 || num == 0)
    {

        return 1;
    }
    else
    {

        return num * facto(num - 1);
    }
}

int main()
{

    int result = facto(4);
    printf("%d", result);
}
