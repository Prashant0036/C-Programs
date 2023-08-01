#include<stdio.h>

void chk_int(int* ptr,int size){
int k=0;
for(int i=0;i<size;i++){
    
if (*ptr>0){
//printf("%d\n",*ptr);
k++;
}

ptr+=1;

}
printf("There are %d positive numbers in this array",k);
}


void main(){

int arr[10]={1,3,-2,5,4,8,-43,6,-4,33};
int* ptr=arr;
chk_int(arr,10);



}