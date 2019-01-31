#include <stdio.h>
#include <stdlib.h>

void daoxu()
{
    int a=0;
    static int i=0;
    scanf("%d",&a);
    if(a>0)
        daoxu(a);
    if(a>0)
        {   (i==0)?(printf("%d",a)):(printf(" %d",a));
            ++i;
        }
}

int main()
{
    daoxu();
    return 0;
}