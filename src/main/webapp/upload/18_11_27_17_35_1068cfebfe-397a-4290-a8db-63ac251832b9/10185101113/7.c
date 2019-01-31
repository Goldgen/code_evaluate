#include <stdio.h>
int reter(int);
int main()
{
    int n,key,m=0;
    scanf("%d",&n);
    int arry[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    scanf("%d",&key);
    for(int i=0;i<n;i++)
    {
        if(arry[i]==key)
        {
            if (m==0)
                printf("%d",i);
            else
                printf(" %d",i);
            m++;

        }

    }
    if(m==0)
        printf("ERROR");
    return 0;
}
