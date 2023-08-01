// #include<stdio.h>
// int main()
// {

// int a=1,n ,z=0;
// do{


// z+=a;
// a++;
// }while(a<=10);
// printf("%d",z);

// return 0;
// }
#include<stdio.h>
int main()
{
int a=1; int i;
printf("Enter the Number for Factorial:");
scanf("%d",&i);
for(i;i>0;i--)
{

a*=i;

}
printf("%d ",a);

return 0;
}
