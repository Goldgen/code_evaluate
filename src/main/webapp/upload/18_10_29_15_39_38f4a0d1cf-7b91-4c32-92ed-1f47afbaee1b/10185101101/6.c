#include <stdio.h>
#include <stdlib.h>
int prime(int m,int n)
{
    int i,j=0;
    for(i=1;i<=(m<n?m:n);++i)
    {
        if((m%i==0)&&(n%i==0))
            j=i;
    }
    return j;
}


int main()
{
    int m,n,k=0;
    scanf("%d %d",&m,&n);
    k=prime(m,n);
    printf("最大公约数是: %d",k);
    return 0;
}
