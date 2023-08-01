#include<stdio.h>

int n(int num){
if (num==1){

return 1;
    }
    else {

        return (num)+n(num-1);
    }


}
void main(){

int size=10,sum=0;
 for(int i=1;i<=size;i++)
 {
sum=n(i);


}
printf("%d",sum);

}