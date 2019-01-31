#include <stdio.h>
#include <stdlib.h>
void cf(int x)
{
    int i=1;
    for(;i<=x;++i)
        for(int k=1;k<=i;++k)
            {
            printf(" %d * %d =%3d",k,i,k*i);
            if(k==i&&k!=x)
            printf("\n");

            }

}
int main()
{
    int n;
    scanf("%d",&n);
    cf(n);

    return 0;
}
