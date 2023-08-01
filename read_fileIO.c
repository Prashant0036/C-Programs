#include<stdio.h>
void main(){

FILE* ptr;
char ch;
ptr =fopen("New_File.txt","r");
if (ptr==NULL){

    printf("File doesn't exist");
}
printf("Your File data:\n");
do {
        ch = fgetc(ptr);
        printf("%c", ch);

    } while (ch != EOF);
fclose(ptr);
}