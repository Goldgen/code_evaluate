#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  int max=1;
  scanf("%d",&n);
  int data[n][2];
  for(int i=0;i<n;i++)
    {
    scanf("%d",&data[i][0]);
     data[i][1]=1;
    }

  for(int i=1;i<n;i++)
{
     if(data[i][0]==data[i-1][0])
    {
        data[i][1]+=data[i-1][1];
        if(max<data[i][1])
            max=data[i][1];
    }
}
printf("%d",max);
  return 0;
}
