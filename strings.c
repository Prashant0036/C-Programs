#include<stdio.h>
void main(){
// 1st way to print a String
char st_ar[]={'R','a','m','\0'};
int i=0;
while(st_ar[i]!='\0'){
printf("%c",st_ar[i]);
i++;
//String as an Array
}

// 2nd way to print a String

char str[]="Prashant";
printf("\n%s",str);

// 3rd way to print a String

char str1[]={'R','o','c','k','\0'};
 char* ptr=str1;
 printf("\n%s\n",ptr);

// Take a input from user
char nm[34];
printf("Enter Your Name:\n");
//scanf("%s",&nm) ;
printf("%s\n",nm);
printf("*********************\n");
// Use of gets function [To take string with space]
 char nm1[35];
printf("Enter Your Name:");
gets(nm1) ;
// Use of puts function [ To print a String]
puts(nm1);
//printf("%s\n",nm1);
}
