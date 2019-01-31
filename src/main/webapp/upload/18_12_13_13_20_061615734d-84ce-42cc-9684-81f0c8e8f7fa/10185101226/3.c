#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[81];
    int i=0,n,j,m;
    scanf("%d",&m);
    while(m!=0)
    {

        n=m%10;
        m=(m-n)/10;
        t[i]=n;
        ++i;
    }
    j=i-1;
    t[i]='\0';
    for(j;j>=0;--j)
    {
        printf("%d",t[j]);
    }
    return 0;
}
