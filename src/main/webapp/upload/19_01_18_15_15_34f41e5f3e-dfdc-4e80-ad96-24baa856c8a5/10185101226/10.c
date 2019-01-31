#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    m=1;
    for(i=0;i<=n;++i)
        m=m*2;
    m--;
    for(i=0;i<=m;++i)
    {
        printf("{");
        j=1;
        k=0;
        while(j!=0)
        {
            if(j%2==1)
                printf("%d",k);
            ++k;
            j/=2;
        }
        printf("}");
        if((i+1)%5==0)
            printf("\n");
    }
    return 0;
}