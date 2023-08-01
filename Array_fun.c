#include<stdio.h>

void print(int*ptr,int size){
//printf("%u\n",ptr);
//printf("%d\n",*ptr);

for (int i=0;i<size;i++){

printf("The %d element of Array is %d\n",i+1,*ptr);
ptr+=1;

}
}
void rev(int * ptr,int size){
for(int i=size-1;i>=0;i--){
printf("The %d element of an Array is : %d\n",i+1,*(((i))+ptr));
    
}

}

void main(){
int arr[7]={4,6,8,1,3,9,7};
int *ptr=arr;
print(arr,7);
rev(arr,7);
printf("%u\n",arr);

printf("%u\n",&arr[1]);


}