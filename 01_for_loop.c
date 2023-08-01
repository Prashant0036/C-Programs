#include<stdio.h>
void patt(){

for(int i=1;i<=3;i++){
 for (int j=1;j<=5;j++){

 if(j<=(2*i)-1){

printf("*");

 }
 else{

    printf(" ");
 }
 

 }


printf("\n");

}

}
void main()
{
    int i=1;
    int z;
    scanf("%d",&z);

    for(i;i<=z;i++)
{
    printf("8\n");

}
    patt();
}