#include <stdio.h>

int main()
{
 int i,j,n=0;
 scanf("%d",&n);
 printf("1\n1 1");
 int last[100];
 last[0]=1;
 last[1]=1;
 for(i=3;i<=n;i++)
 {
     printf("\n");
    int line[i];
     line[0]=1;
     line[i-1]=1;
     for(j=1;j<i-1;j++)
         line[j]=last[(j-1)]+last[j];
     for(j=0;j<i;j++)
        {if(j==i-1)
            printf("%d",line[j]);
         else printf("%d ",line[j]);
        last[j]=line[j];}
 }
 return 0;
}
