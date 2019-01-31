#include <stdio.h>

int main()
{
  int i,j,n,min=0;
    scanf("%d",&n);
    int data[n];
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
  for(i=0;i<n-1;i++)
  {
      for(j=1;j<n-i;j++)
      {
          if(data[j]<data[j-1])
            {min=data[j];
            data[j]=data[j-1];
            data[j-1]=min;}
      }
  }
  for(i=0;i<n;i++)
  {
      printf("%d",data[i]);
      if(i!=n-1)
        printf(" ");
  }
  return 0;
}
