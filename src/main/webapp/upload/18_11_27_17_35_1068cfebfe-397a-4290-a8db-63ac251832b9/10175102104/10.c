#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void bubble_sort(int a[],int n)
{
    int i,j;
    int temp;
    for(i=0;i<n-1;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
   int n,i,list[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&list[i]);
   }
   bubble_sort(list,n);
   for(i=0;i<n-1;i++)
   {
       printf("%d ",list[i]);
   }
   printf("%d",list[i]);
   return 0;
}
