#include<stdio.h>
void main(){

int arr[]={1,4,3,4,10};
int* ptr1=&arr[0];
int* ptr2=&arr[1];
int*ptr3=&arr[2];
printf("Address of arr[0]: %u\n",ptr1);
printf("Address of arr[1]: %u\n",ptr2);
printf("Address of arr[2]: %u\n",ptr3);
ptr3++;
printf("Value of arr[4]: %d\n",*ptr3);
ptr3++;
printf("Value of arr[5]: %d\n",*ptr3);
ptr3--;
printf("Value of arr[4]: %d\n",*ptr3);


printf("Size taken by an element of an array: %u\n",(ptr3-ptr1));






}