#include <stdio.h>
#include <conio.h>
int main()
{
int r,s;
printf("Enter your Rating (1-5) :");
scanf("%d" "%d",&r,&s);

switch(s)
{

    case 4 :
    printf("Sorry for bad exprience!",r-s);

  break;
    case 2:
    printf("We will try to make it better!");

break;

case 3 :
printf("Next time You will get better! ");
break;
default :
printf("Please Enter Valid Rating!");
    




}


    return 0;
}
