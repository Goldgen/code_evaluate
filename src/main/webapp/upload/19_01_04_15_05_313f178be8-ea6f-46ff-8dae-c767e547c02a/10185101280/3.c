#include<stdio.h>
#include <ctype.h>
#include<stdlib.h>
#include<string.h>
void main()
{

char A[1000];
char B[1000];
while(scanf("%s", A) && (strcmp(A, "#") != 0))
{

    scanf(" %s",B);

    int i=strlen(B);
    int j=0,e=0;
    int s=strlen(A);
    int p=0;
    for(j=0;j<=s;j++)
    {
        for(;e<=i;e++)
        {
          if(A[j]!=B[e])

           break;
         j=j+i;
         p++;

       }

    }

   printf("%d\n",p);
}
        return 0;
}

