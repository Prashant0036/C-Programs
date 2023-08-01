#include<stdio.h>
void add (){

int a=20;
int b=30;
printf("%d\n",a+b);

}    //No return type
int sub(){
int a=90;
int b=60;
int c=a-b;
return c;
}   //Return Type
void main(){

add(); //calling a no return type function
int sub_result=sub();
printf("%d\n",sub_result); //calling a return type function

}
