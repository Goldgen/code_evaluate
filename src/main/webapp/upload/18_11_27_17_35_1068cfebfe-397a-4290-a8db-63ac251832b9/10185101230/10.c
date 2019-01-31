#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int i=0;
    int array[n];
    int j=0;
    int t=0;
      for(i=0;i<n;i++)
      {
           scanf("%d",&array[i]);
      }
for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
               t=array[j+1];
               array[j+1]=array[j];
               array[j]=t;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d ",array[i]);
    }
    printf("%d",array[n-1]);
    return 0;
}


