#include<stdio.h>
#include<string.h>
struct myStructure {
int carno;
char carnm[30];
char carmdl[20];

};
struct myStructure2{};
void main(){
struct myStructure s1;
struct myStructure s2;
struct myStructure s3;

s1.carno=9084;
strcpy(s1.carnm,"Audi");
strcpy(s1.carmdl,"Q7");

s2.carno=9528;
strcpy(s2.carnm,"Audi");
strcpy(s2.carmdl,"Q9");

s3.carno=8630;
strcpy(s3.carnm,"Audi");
strcpy(s3.carmdl,"r8");

printf(" Car No. %d \t %d \t %d\n",s1.carno, s2.carno,s3.carno);
printf(" Car Name: %s\t%s\t %s\n",s1.carnm,s2.carnm,s3.carnm);
printf(" Car Model: %st %s\t%s\n",s1.carmdl,s2.carmdl,s3.carmdl);


// simple program to understand structure?





}