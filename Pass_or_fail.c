#include<stdio.h>
#include<conio.h>

int main()
{
float physics,chemistry,math;
float total;

printf("Enter your Physics Number:");
scanf("%f",&physics);

printf("Enter your Chemistry Number:");
scanf("%f",&chemistry);

printf("Enter your Math Number:");
scanf("%f",&math);

total=(physics+chemistry+math)/3;



if (physics<33 || chemistry<33 || math<33 || total<40 )
{
printf("You are fail!");

}
else 
{
printf("You are Pass!");

}

return 0;


}