#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{  int m,n;
 scanf("%d%d",&m,&n);
 int a[m][n],i,j;
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 { scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 { for(j=0;j<m;j++)
     { printf("%d",a[j][i]);
       if(j<m-1)printf(" ");
      }
     printf("\n");
 }
 return 0;
}