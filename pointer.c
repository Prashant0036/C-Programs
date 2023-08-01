#include<stdio.h>
void main(){
int a=20;
printf("%p\n",&a);
//You should also note that &a is often called a "pointer". 
//A pointer basically stores the memory address of a variable as its value.
//To print pointer values, we use the %p format specifier.



int myAge = 20; // an int variable
int* ptr=&myAge;
//or
//int * ptr=&myAge;
//or
//int *ptr=&myAge
printf("%d\n",myAge);  // Outputs the value of myAge (43)
printf("%p\n", &myAge); // Outputs the memory address of myAge (0x7ffe5367e044)
printf("%p\n",ptr);

printf("%d\n",*ptr);
//When used in declaration (int* ptr), it creates a pointer variable.
//When not used in declaration, it act as a dereference operator.
int x=20;
char ch [8]="akashabc";
char* chp=&ch[8];
printf("add. of ch in HD %u\n",&ch);
printf("add. of ch in D %s\n",chp);

printf("This is the address of x variable in memory (Hexadecimal)%p\n",&x);
int*j=&x;
printf("This is the address of x variable in decimal %d\n",j);
printf("This is the value of x variable using j pointer %d\n",*j);
int i=1;
printf("%p\n",&i);
void fun(int i)
{
printf("%p\n",&i);

}
fun(1);

}