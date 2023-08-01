#include<stdio.h>
void main(){



char * ptr="Prashant";
printf("%s\n",ptr);
ptr="Rohan";
printf("%s\n",ptr); //It can be reinitialized 

char ptr1[]="Prashant";
printf("%s\n",ptr1);
// ptr1="Rohan"; //It can not be reinitialized 

}