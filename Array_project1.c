#include<stdio.h>
void main(){
int row,col;

printf("Enter the no. of rows:\n");
scanf("%d",&row);

printf("Enter the no. of colomn:\n");
scanf("%d",&col);
int arr[row][col];
for (int i=0;i<row;i++){

for(int j=0;j<col;j++){
printf("Enter the %d element of %d row:\n",j+1,i+1);
scanf("%d",&arr[i][j]);

}
}
for (int i=0;i<row;i++){

for(int j=0;j<col;j++){
    
printf(" %d",arr[i][j]);


}
printf("\n");
}

}