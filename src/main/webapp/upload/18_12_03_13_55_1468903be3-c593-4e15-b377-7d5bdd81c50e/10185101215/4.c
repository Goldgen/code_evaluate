#include<stdio.h>
#include<string.h>
int main()
{
  int a[50][50],i,j,x,y;
  scanf("%d%d",&x,&y);
  for(i=0;i<x;i++)
  {
    for(j=0;j<y;j++)
    scanf("%d",&a[i][j]);
  }
  for(i=0;i<y;i++)
 {
    for(j=0;j<x;j++)
    {
        if(j<x-1)
      printf("%d ",a[j][i]);
      else
        printf("%d",a[j][i]);
    }
      printf("\n");
  }
return 0;
}