#include<stdio.h>
int main()
{
    int a,i,j,k,l;
    int count=0;
    scanf("%d",&a);
    for(i=1;i<=31;++i)
    {
        j=a>>(31-i);
        k=~(~0<<1);
		l=j&k;
        if(l==1)
            count+=1;
    }
    printf("%d",count);
    return 0;
}
