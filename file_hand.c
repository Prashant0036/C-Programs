#include <stdio.h>

   struct division{
   char div[10];
        
    }
void main()
{

    char nm[20];
    int marks[5];
    int sum = 0;
    char div[10] = "";
    struct division S;
    FILE *fptr;
    fptr = fopen("New_file.txt", "a");
    if (fptr == NULL)
    {
        printf("File doesn't exist");
    }
    printf("Enter Your Name :");
    scanf("%s", &nm);
    for (int i = 0; i < 5; i++)
    {

        printf("Enter %d Subject Marks: ", i + 1);
        scanf("%d", &marks[i]);
        sum = sum + marks[i];
    }
    float per = (float)sum / 5;
    
    if (per >= 60)
    {

         fprintf(fptr, "Student Name:%s Total Marks:%d Percentage:%f Division:%s\n", nm, sum, per, "First Div.");

    }
    else if (per >= 45 && per < 60){
        
         fprintf(fptr, "Student Name:%s Total Marks:%d Percentage:%f Division:%s\n", nm, sum, per, "Second Div.");

    }
    else if (per >= 33 && per < 45){
                fprintf(fptr, "Student Name:%s Total Marks:%d Percentage:%f Division:%s\n", nm, sum, per, "Third Div.");

    }
    else
    {
        S.div="Fail";
         fprintf(fptr, "Student Name:%s Total Marks:%d Percentage:%f Division:%s\n", nm, sum, per,S.div);
    }
    printf("Your details have been submitted successfully. Thank You! :)");
    fclose(fptr);
}