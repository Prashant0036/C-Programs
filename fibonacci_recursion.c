// Fibonacci Series Using Recursion

#include <stdio.h>

int fibo(int num)
{
    if (num == 1 || num == 2)
    {

        return 1;
    }

    else
    {
        return fibo(num - 1) + fibo(num - 2);
    }
}

void main()
{
    int size;
    printf("Enter Size of Fibonacci series:");
    scanf("%d", &size);
    for (int i = 1; i <= size; i++)
    {

        printf("%d\n", fibo(i));
    }
}