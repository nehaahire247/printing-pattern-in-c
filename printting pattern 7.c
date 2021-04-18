/*  program to print
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
  */

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main ()
{int i,j,K=1;
printf("programe to display printtting pattern \n");
for (i=1;i<=5;i++)
{ printf("\n");
    for(j=1;j<=i;j++)
    {
        printf("\t %d ",i );
        K++;
    }
}

 printf("\n");
}
