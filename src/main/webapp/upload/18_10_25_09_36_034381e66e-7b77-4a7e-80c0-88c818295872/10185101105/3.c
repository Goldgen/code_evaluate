#include <stdio.h>
#include <stdlib.h>

int main()
{
    long s=1L;
    int n,i=1;
    scanf("%d",&n);
    if(n<20)
    {
        while(i<=n)
        {
            s=s*i;
            i++;
        }
        printf("%ld",s);
    }
    return 0;
}
