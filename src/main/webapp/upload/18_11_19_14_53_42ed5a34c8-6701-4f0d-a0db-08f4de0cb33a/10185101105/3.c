#include <stdio.h>

int order();
int main()
{
    order();
    return 0;
}

int order()
{
    int n;
    static int i=0;
    i++;
    if(i==1)
        scanf("%d",&n);
    else
        scanf(" %d",&n);
    if(n>0)
    {
        order();
        static int j=0;
        j++;
        if(j==1)
            printf("%d",n);
        else
            printf(" %d",n);
    }
    else
        return 0;
}
