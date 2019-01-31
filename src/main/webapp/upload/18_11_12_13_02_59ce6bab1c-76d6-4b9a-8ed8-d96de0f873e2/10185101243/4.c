#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    j=0;
    for(i=0;;i++)
    {
        k=n%10;
        j=j+k*pow(8,i);
        if(n/10==0)
        {
            printf("%d",j);
            break;
        }
        n=n/10;
    }
    return 0;
}
