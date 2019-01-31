#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i,j;
 char ch='A'-1;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     ch+=1;
     for(j=1;j<=n-i;j++)
        printf(" ");
     for(j=1;j<=2*i-1;j++)
        printf("%c",ch);
    printf("\n");
 }
 for(i=n-1;i>0;i--)
    {
        ch+=1;
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=2*i-1;j++)
            printf("%c",ch);
        if(i!=1)
            printf("\n");
    }

}