#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int m,n,i,j,a;
   int shuzu[50][50],*cap=0,*pe=0,z;
   scanf("%d%d",&m,&n);
   for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           scanf("%d",&shuzu[i][j]);
        if(m<n)
            z=n;
        else
            z=m;
   for(i=0;i<z;i++)
       for(j=0;j<z;j++)
       {
           cap=&shuzu[i][j];
           pe=&shuzu[j][i];
           a=*cap;
           *cap=*pe;
           *pe=a;
       }
   for(j=0;j<n;j++)
   {
       for(i=0;i<m;i++)
       {
           printf("%d",shuzu[i][j]);
           if(i<=m-2)
            printf(" ");
       }
       if(j<=n-1)
        printf("\n");
   }
    return 0;
}
