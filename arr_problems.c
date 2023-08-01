#include <stdio.h>
// void main()
// {
//     int size;
//     printf("Enter Size:");
//     scanf("%d", &size);
//     int arr[size];
//     int arr_rev[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("Enter %d item:", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int j = 0;
//     for (int i = size - 1; i >= 0; i--)
//     {
//         arr_rev[j] = arr[i];
//         j++;
//     }
//     printf("Reverse array:");
//     for (int i = 0; i < size; i++)
//     {
//         printf(" %d", arr_rev[i]);
//     }
// }
// void main(){

// char n[20];

// printf("Enter a sentence:");
// gets(n);
// printf("%s",n);

//}
void main(){
int r,c;
printf("Enter no. of rows and column\n");
scanf("%d %d" ,&r,&c);
int arr[r][c];
for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){


        printf("Enter [%d] [%d] element\n",i,j);
        scanf("%d",&arr[i][j]);
    }
}

void prnt(){
printf(" Your Entered Matrix is :\n");
    for(int i=0;i<r;i++){

    for(int j=0;j<c;j++){


        
       printf("%d ",arr[i][j]);
    }
    printf("\n");
}
}

void row_sum(){

    printf("row_sum\n");
    for(int i=0;i<r;i++){
        int sum=0;
        printf("Sum of %d row :",i);
        for(int j=0;j<c;j++){
            sum=sum+arr[i][j];
            
        }
        printf("%d\n",sum);
    }
}
void col_sum(){

    printf("col_sum\n");
    for (int j=0;j<c;j++){
 int sum_c=0;
 printf("Sum of %d column: ");
  for (int i=0;i<r;i++){
   
     sum_c=sum_c+arr[i][j];

  }
  printf("%d\n",sum_c);

    }
}
void left_diag_sum(){
if (r==c){
    
        int sum=0;
        printf("Sum of left diagonal:");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if (i==j){
            sum=sum+arr[i][j];
            }
            
        }
     }
        printf("%d\n",sum);

}
}
void right_diag_sum(){
if (r==c){
    printf("Right diag_sum\n");
        int sum=0;
        printf("Sum of right diagonal:");
 for(int i=0;i<r;i++){
        
            sum=sum+arr[i][r-1-i];
            
        }
    
        
        printf("%d\n",sum);
}

else{

    printf("row and cloumn of Matrix should be same ");
}
}
int choice;
char y;

while(1){

  printf("Choose any one option:\n");
  printf("1/- To print Matrix\n");
  printf("2/- To print Sum of matrix row wise\n");
  printf("3/- To print Sum of matrix column wise\n");
  printf("4/- To print sum of L.H.S. diagonals \n");
  printf("5/- To print sum of R.H.S. diagonals \n");

  printf("Enter any given choice\n");
  scanf("%d",&choice);
  if (choice==1){

  prnt();

  }
  else if (choice==2){

    row_sum();
  }
  else if (choice==3){

    col_sum();
  }
else if (choice==4){

    left_diag_sum();
  }
  
else if (choice==5){

    right_diag_sum();
  }
  else{

    printf("Enter a valid input\n");
    continue;
  }

  printf("Do you want to continue? y/n\n");
   scanf(" %c",&y);
  if (y == 'y'){

    continue;
  }
  else{
    break;
  }
}

}