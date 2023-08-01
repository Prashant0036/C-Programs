#include<stdio.h>
void main(){

int n=153;
int temp=n;
int sum=0;
for(int i=n;i>0;){
int rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
i=n;
}



if (sum==temp){

printf("Armstrong");

}
else{

    printf("Not a Armstrong");
}
}