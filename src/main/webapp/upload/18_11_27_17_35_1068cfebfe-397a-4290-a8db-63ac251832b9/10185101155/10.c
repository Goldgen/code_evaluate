#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t];
    for(int x=0;x<t;x++)
        scanf("%d",&a[x]);
     int b;
     for(int i=0;i<t;i++)
            for(int j=0;j<i;j++)
     {
         if(a[j]>a[i])
         {
             b = a[j];
             a[j] = a[i];
             a[i] = b;
         }
     }
     for(int x=0;x<t;x++)
     {
         printf("%d",a[x]);
         if(x<t-1)
            printf(" ");
     }
    return 0;
}