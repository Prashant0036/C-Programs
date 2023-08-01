#include<stdio.h>
#include<conio.h>
int main(){


//Declaring an Array
int arr[6];
int a[5]={1,2,3,4,5};

//Declaring an String as an Array
char str1[]={'H','e','y','\0'};
char str2[]="Buddy";

//print array element 
printf("%s \n",(str1));
printf("%s\n",(str2));
printf("%d\n",a[0]);
printf("%d\n",a[1]);
printf("%d\n",a[2]);

//change value of an Array item
 a[2]=30;
 printf("Changed value of a[2] \n");
 printf("%d",a[2]);

// Traversing in Array with for loop
int Marks[10]={90,67,88,67,56,88,68,97,87,45};

 for(int i=0;i<10;i++){

     printf("%d\n",Marks[i]);
 }


//Storing Array elements by user input

int Arr[5];
for(int j=0;j<5;j++)
{

printf("Enter %d no.",j+1);
scanf("%d\n",&Arr[j]);

}

for(int k =0;k<5;k++)
{
printf("%d\n",Arr[k]);

}
    return 0;
    
}
