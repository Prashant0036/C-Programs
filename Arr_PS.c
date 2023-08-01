#include<stdio.h>
void main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};

int*ptr=arr;
ptr+=2;
printf("%d",*(arr));

}