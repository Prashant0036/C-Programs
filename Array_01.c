#include<stdio.h>
void main(){
int arr[10];
int t;
printf("Enter any no. :");
scanf("%d",&t);
int x=t;
for(int i=0;i<=9;i++){

arr[i]=x;
x+=t;
}

for(int i=0;i<=9;i++){

    printf(" %d * %d is: %d\n",t,i+1,arr[i]);
}

int A[5]={1,2,3,4,5};
int B[5];
B[4]=A[4];
printf("%d",B[4]);
for(int i=0;i<5;i++){
int v=4;
A[i]=B[v];
v--;

}
for(int i=0;i<5;i++){

printf("%d\n",B[i]);

}

}