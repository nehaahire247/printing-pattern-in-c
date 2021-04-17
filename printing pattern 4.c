program to print * * * * *
                 * * * * 
                 * * *
                 * *
                 *

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{int i,j ;
printf("programe to display printtting pattern \n");
for (i=1;i<=5;i++)
{ for(j=1;j<=5;j++)
{   if(j<=6-i)
    printf("*");
    else
    printf(" "); }

printf("\n");}
}
