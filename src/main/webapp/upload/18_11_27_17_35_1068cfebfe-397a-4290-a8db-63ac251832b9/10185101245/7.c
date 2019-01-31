#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int data[n];
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    int a;
    scanf("%d",&a);
    int j;
    int i=0;
    for(j=0;j<n;j++)
    {
        if(a==data[j])
           {
              i++;
              if(i==1)
               printf("%d",j);
              else
                printf(" %d",j);
           }
    }
    if(i==0)
        printf("ERROR");


    return 0;
}
