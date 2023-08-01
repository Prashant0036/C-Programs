#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
int d;

printf("Enter The Numbers One by one:\n");
scanf("%d" "%d" "%d" "%d",&a,&b,&c, &d);

if(a>b && a>c && a>d)
{

printf("%d is biggest Number!\n",a);

}

else if (b>c && b>a && b>d){

printf("%d is biggest Number!",b);
}

else if (c>a && c>b && c>d){

    printf("%d is biggest Number!",c);
}
else{


    printf("%d is biggest Number!",d);
}

  
return 0;
}