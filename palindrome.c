#include<stdio.h>

void main(){

void palin(int n){

int temp= n;
int rev=0;
while (temp>0)
{   
    int rem=temp%10;
   
    rev=rem+rev*10;
    temp=temp/10;
}
printf("Reverse is %d\n",rev);


}


palin(123);
}