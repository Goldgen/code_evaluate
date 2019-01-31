#include <stdio.h>
#include <string.h>
int main()
{
    int i,m=0,n;
    char a[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<(n-1)/2;i++)
    {
        if(a[i]!=a[n-1-i])
            m=1;
    }
    if(m==0)
        printf("True");
    else
        printf("False");
    return 0;
}
