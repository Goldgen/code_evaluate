#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,n,j=0,flag;
    scanf("%d",&n);
    int arry[n];
    for(i=0;i<n;i++)
    scanf("%d",&arry[i]);
    scanf("%d",&flag);
    for(i=0;i<n;i++)
    {
        if(arry[i]==flag)
       {
        j++;
        if(j==1)
        printf("%d",i);
        else
        printf(" %d",i);}
          }
          if(j==0)
    printf("ERROR");
    return 0;
}

