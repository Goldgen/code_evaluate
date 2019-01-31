#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,i=0;
    scanf("%d",&n);
    int arry[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    scanf("%d",&m);
    while(arry[i]!=m)
    {
        i++;
    }
    if(i<n-1)
    {
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
               printf("%d",arry[j]);
               if(j!=n-1)
               printf(" ");
            }
        }
    }
    else if(i==n-1)
    {
        for (int j=0;j<n-1;j++)
        {
            printf("%d",arry[j]);
            if (j<n-2)
            printf(" ");
        }
    }
    else
        printf("ERROR");
        return 0;
}
