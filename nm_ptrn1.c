#include<stdio.h>
#include<string.h>
void main(){

// char nm[20]="Prashant";
// int len=strlen(nm);
for(int i=1;i<=5;i++){                                                         

 for (int j=1;j<=5;j++){
   
   if (j>=(6-i)){
     printf("%d",j);

   }
   else{
    printf(" ");
   }

    
 }
printf("\n");
}
for(int i=1;i<=5;i++){                                                         

 for (int j=1;j<=5;j++){
   
   if (j>(i)){
     printf("%d",j);

   }
   else{
    printf(" ");
   }

    
 }
printf("\n");
}

}


