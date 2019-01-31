#include<stdio.h>
#include<stdlib.h>
int main()
{ int n;
scanf("%d",&n);
 int a[10][10]={{0}};
  int i;
 for(i=0;i<10;i++)
 { a[i][0]=1; //杨辉三角第一列值
 }
 a[1][1]=1;
  int j;
  for(i=2;i<10;i++)
    {  for(j=1;j<=i;j++)
        a[i][j]=a[i-1][j-1]+a[i-1][j];//其余的值
     }

   for(i=0;i<n;i++)
      {  for(j=0;j<=i;j++)
       {
         if(j<i)
          printf("%d ",a[i][j]);
       else
         printf("%d",a[i][j]);

        }
       if(i<n-1)printf("\n");
     }

    return 0;
}
