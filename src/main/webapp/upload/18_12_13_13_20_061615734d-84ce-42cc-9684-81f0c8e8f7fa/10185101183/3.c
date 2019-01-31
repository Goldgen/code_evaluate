#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[10];
    int i;
    for(i=0;n>0;++i)
    {
        a[i]='0'+n%10;
        n=n/10;
    }
    for(int j=i-1;j>=0;--j)
        printf("%c",a[j]);

}
