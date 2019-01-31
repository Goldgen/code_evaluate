#include <stdio.h>

void prt()
{
    int n;
    scanf("%d",&n);
    if(n<=0)
        return;
    prt();
    printf("%d ",n);
}

int main()
{
    int n;
    scanf("%d",&n);
    prt();
    printf("%d",n);
    return 0;
}
