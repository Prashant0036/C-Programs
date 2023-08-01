#include<stdio.h>
void main(){

void facto(int n){
int fact=1;
for(int i=n;i>=1;i--){

  fact=fact*i;
  

}
printf("%d\n",fact);

}

facto(5);



void rev(int dig){
int temp=dig
int rev=0;
int sum=0;
while (temp>0)
{   
    int rem=temp%10;
    sum=sum+rem;
    rev=rem+rev*10;
    temp=temp/10;
}
printf("Reverse is %d\n",rev);

printf("Sum of digit is %d\n",sum);
printf("%d\n",dig);
if (dig==rev){
   printf("digit is Palindrome\n");

}
else{

 printf(" digit is not Palindrome\n");

}

}
rev(323);
}