#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[81];
    char *p=&a[0];
    int i,n,flag=0;
    gets(a);
    n=strlen(a);
    for(i=0;i<=n/2;i++)
    {
        if(*(p+i)!=*(p+n-1-i))
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("True");
    else
        printf("False");
    return 0;
}

