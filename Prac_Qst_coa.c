#include<stdio.h>
#include<string.h>
void main(){

char nm[20];
printf("Enter Your Name:");
scanf("%s",&nm);
int len=strlen(nm);
for(int i=len-1;i>=0;i--){

printf("%c",nm[i]);


}
printf("\n------------");
void facto(int n){
int facto=1;
for (int i=1;i<=n;i++){

facto=facto*i;
}
printf("Factorial of %d is %d\n",n,facto);
}
printf("\nEnter a no.");
int num;
scanf("%d",&num);
facto(num);
printf("\n------------");

for (int i=0;i<5;i++){
    int k=5;
    for (int j=0;j<5;j++){
        if (j<=i){
        printf("%d",k);
        k--;
        
        }
        else{
            printf(" ");
        }

    }
    printf("\n");
}
printf("\n------------");

void swap(int a, int b){
int temp=a;
a=b;
b=temp;

printf("Value of a is %d and the value of b is %d",a,b) ;

}
int a=4;
int b=5;

swap(a,b);

printf("\n------------");

int x=20;
float y=30.3;
double z=30.45345;
long x1=6785326;
char c='p';
printf("\n Size of int %d",sizeof(x));
printf("\n Size of float %d",sizeof(y));
printf("\n Size of double %d",sizeof(z));
printf("\n Size of long %d",sizeof(x1));
printf("\n Size of char %d",sizeof(c));


}
