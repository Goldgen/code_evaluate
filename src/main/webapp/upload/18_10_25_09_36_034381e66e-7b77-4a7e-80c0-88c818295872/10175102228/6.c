#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   int n;
scanf("%d",&n);
 int i,j;
 printf("*\n");
 for(i=1;i<n-1;i++)
 { printf("*");
   for(j=1;j<i;j++)
     printf(" ");
      printf("*\n");


 }
 for(i=0;i<n;i++)
 { printf("*");

 }
return 0;
}
