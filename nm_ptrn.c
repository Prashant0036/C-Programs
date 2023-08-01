#include<stdio.h>
#include<string.h>
void main(){

char nm[20]="Prashant";
int len=strlen(nm);
for(int i=0;i<len;i++){                                                         

 for (int j=0;j<i;j++){


    printf("%c",nm[j]);
 }
printf("\n");
}
for(int i=len;i>=0;i--){

 for (int j=0;j<i;j++){


    printf("%c",nm[j]);
 }
printf("\n");
}


}