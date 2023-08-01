#include<stdio.h>
#include<conio.h>
int fact_loop(int); // loop Function Declaration



void main(){

int result=fact_loop(5); // Calling Function
printf("Factorial value is %d",result);

}

//loop Function Definition
int fact_loop(int num){
int fact=1;
for(int i=num;i>=1;i--){
fact=fact*i;
}

return fact;

}