#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,tmp,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {

        for(j=n-1;j>=i;j--)
         if(a[j]<a[j-1])
           {tmp=a[j-1];a[j-1]=a[j];a[j]=tmp;}


    }
           for(i=0;i<n;i++)
           {
               if(i<n-1)
                printf("%d ",a[i]);
               else
                printf("%d",a[i]);
           }

}