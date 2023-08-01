#include <stdio.h>
void no_swap(int, int);
void swap(int *, int *);
void ten_x(int *x)
{

    *x = 10 * (*x);
}
void main()
{

    int a = 5, b = 4;

    printf(" Before Swapping %d %d\n", a, b);
    // no_swap(a,b); will not work due to call by value
    swap(&a, &b); // Will work due to call by reference
    printf(" After Swapping %d %d\n", a, b);
    int x = 10;
    printf("Actual value of x is %d\n", x);
    ten_x(&x); // call by reference
    printf("value of x (after calling ten_x function) is %d\n", x);
}
void no_swap(int a, int b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}