#include<stdio.h>
int main()
{
int arr[100][100];
int i, j;
int m,n;
scanf("%d %d",&m,&n);
for(i=0; i<m; i++)
{
  for(j=0; j<n; j++)
  {scanf("%d", &arr[i][j]);}
}
int i2=0;
int j2=0;
 for(j2=0; j2<n; ++j2)
{
 for(i2=0; i2<m-1; ++i2)
  {printf("%d ", arr[i2][j2]);
  }
  printf("%d\n", arr[i2][j2]);
  
}
return 0;
}
