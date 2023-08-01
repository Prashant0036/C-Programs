#include<stdio.h>
void main(){

int row=3,col=10;
int arr[row][col];
int k=2;
for(int i=0;i<row;i++){

for(int j=0;j<col;j++){

for(int p=k;p<=20;p+=0){
arr[i][j]=p;

}
}
k+=2;
//printf("");
}

for(int i=0;i<row;i++){

for(int j=0;j<col;j++){

printf("%d",arr[i][j]);

}
printf("\n");
}
}