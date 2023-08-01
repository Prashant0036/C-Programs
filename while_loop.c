// #include <stdio.h>
// #include <conio.h>
// int main()

// {

//     int i = 1;
//     int n;
   
//     printf("Enter the Number for n\n:");
//         scanf("%d",&n);

//   do {
//       printf("%d \n", i++);
     
//   }
//   while (i<=n);
//     return 0;

// }
#include<stdio.h>
int main()
{


    int a=0,n=1;
    int x;
    printf("enter a last number ");
    scanf("%d",&x);
    while(n<=x)
    {

       

        a+=n;

        n++;
    }
    printf("Sum of 10 Natural Numbers is :%d \n",a);
    
    
    return 0;
}