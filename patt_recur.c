#include<stdio.h>
int fun(int num){
if (num==1){

    printf("*\n");
}
else{
fun(num-1);
    
}
for(int i=1;i<=2*num-1;i++){


    printf("*");
}
printf("\n");

}


void main(){

fun(5);


}