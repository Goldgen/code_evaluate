#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    char a[50];
    for(int i=0;i<n;++i)
    {
        scanf("%s",a);
        for(int j=0;j<strlen(a);++j)
        {
            if(a[j]=='Z')
                a[j]='A';
            else
                a[j]++;
        }
        if(i!=n-1)
            printf("case #%d: %s\n",i,a);
        else
            printf("case #%d: %s",i,a);
    }
    return 0;
}
