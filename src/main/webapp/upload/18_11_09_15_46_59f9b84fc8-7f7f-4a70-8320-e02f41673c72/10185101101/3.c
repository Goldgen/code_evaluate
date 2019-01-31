#include <stdio.h>
int main()
{
    int i,j=0;int count=0;
    char time=0;
    time='A';
    scanf("%d",&count);
    for(i=1;i<=count;++i,++time)
    {
        for(j=count-i;j>0;--j)
            printf(" ");
        for(j=1;j<=2*i-1;++j)
            printf("%c",time);
        printf("\n");
    }
    for(i=count+1;i<=2*count-1;++i,++time)
    {
        for(j=i-count;j>0;--j)
            printf(" ");
        for(j=1;j<=4*count-1-2*i;++j)
            printf("%c",time);
        if(i!=2*count-1)
            printf("\n");
    }
    return 0;
}
