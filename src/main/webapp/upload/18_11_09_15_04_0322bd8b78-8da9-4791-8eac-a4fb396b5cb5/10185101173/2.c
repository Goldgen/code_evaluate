#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    scanf("%d",&a);
    int j=0;for(;j<a;++j)
    {   int i=0;for(;i<(a-j-1)*2;++i)
        {printf(" ");}
        int k=0;for(;k<j;++k)
        {printf("%d+",k+1);}
        printf("%d=%d",j+1,j+1);
        int l=j;for(;l>0;--l)
        {printf("+%d",l);}
        if(j<a-1)
            printf("\n");
    }
    return 0;
}
