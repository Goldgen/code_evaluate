#include <stdio.h>
int main()
{ int i,j,n=0;
 int a[10][10]={0};
while((n<1)||(n>10))
{
  scanf("%d",&n);
}
for(i=0;i<n;i++){
    a[i][0]=1;}
for(i=1;i<n;i++){
for(j=1;j<=i;j++){
    a[i][j]=a[i-1][j-1]+a[i-1][j];}
}
for(i=0;i<n;i++)
    { for(j=0;j<=i;j++)
     if(i==j)
     {
         printf("%d",a[i][j]);
     }
     else
     {
           printf("%d ",a[i][j]);
     }
     if(i!=n-1)
     {
          printf("\n");
     }
    }
    return 0;
}