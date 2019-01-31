#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j;
int n=0;
scanf("%d",&n);
int array[n];
int temp;
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
for(i=0;i<n-1;i++)
{

     for(j=0;j<n-1-i;j++)
 {
    if(array[j]>array[j+1])
   {
     temp=array[j+1];
    array[j+1]=array[j];
    array[j]=temp;
   }
  }
}
for(i=0;i<n;i++)
    {
    printf("%d",array[i]);
if(i!=n-1)
    printf(" ");
}
    return 0;
}
