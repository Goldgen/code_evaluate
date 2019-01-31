#include<stdio.h>

int main(void)
{
    int n = 0;
    int i = 0;
    int j = 0;
    int middle = 0;
    scanf("%d",&n);

    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(num[j]<num[j-1])
                {
                    middle = num[j];
                    num[j] = num[j-1];
                    num[j-1] = middle;
                }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d",num[i]);
        if(i!=n-1)
            printf(" ");
    }
}
