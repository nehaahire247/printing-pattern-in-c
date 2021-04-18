/*  program to print
 A
 A B
 A B C
 A B C D
 A B C D E
  */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{int i,j,x= 65 ;
printf("programe to display printtting pattern \n");
for (i=1;i<=5;i++)
{ printf("\n");

    for(j=1;j<=i;j++)
    {
        printf("\t %c",x );

    }
    x++;
}

 printf("\n");
}
