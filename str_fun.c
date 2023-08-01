#include<stdio.h>
#include<string.h>
void main(){

// ----------Function use in String------------------

//To get length  (strlen())
char * ptr="Prashant";
printf("The length of this string is %d\n",strlen(ptr));

// To copy a string (strcpy()))

char *str="Prashant";
char str1 [34];
strcpy(str1,str);
printf("Now the value of str1 is %s\n",str1);

// To concate two strings (strcat())
char fnm[20]="Prashant";
char lnm[20]=" Saraswat";
strcat(fnm,lnm); // Now fnm will contain whole string
printf(" String after concatanation is %s\n",fnm);

// To compare two string (strcmp())

char nm1[20]="Prashant";
char nm2[20]="Prashant";
printf("%d\n",strcmp(nm1,nm2)); // Will return 0
// If two strings are same will return "0" 

// If two strings are not same will return "1" 
char Nm1[20]="gax";
char Nm2[20]="def";
printf("%d",strcmp(Nm1,Nm2));
// If ASCII value of first string is greater than second one it will return 1 
// If ASCII value of first string is smaller than second one it will return -1

}