#include <stdio.h>
#include <conio.h>

int main()

{
    float radius;
    float pie = 3.14;
    float height;
    printf("Enter the radius of circle:\n");
    scanf("%f", &radius);

    printf("Area of your circle is: %f \n", radius * pie * radius);

    printf("Enter the height of cylinder:\n ");
    scanf("%f", &height);
    printf("Volume of your Cylinder is: %f \n", radius * radius * pie * height);
    getch();
}