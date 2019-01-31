#include <stdio.h>
int main()
{int m,n,i,j;
scanf("%d %d",&m,&n);
int num1[m],num2[m];
for(int i=0;i<m;i++)
scanf("%d",&num1[i]);
for(i=m-n,j=0;i<m;i++,j++)
    num2[j]=num1[i];
for(int i=0;i<m-n;i++,j++)
    num2[j]=num1[i];
for(int i=0;i<m-1;i++)
printf("%d ",num2[i]);
printf("%d",num2[m-1]);
return 0;}
