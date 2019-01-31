#include <stdio.h>
#include <string.h>
int main()
{
    int i=0,m=0,n,p;
    char a[100][100];
    while(scanf("%s",a[i])!=EOF)
    {
        n=strlen(a[i]);
        if(n>m)
        {
            m=n;
            p=i;
        }
        i++;
    }
    printf("%s\n",a[p]);
    return 0;
}

