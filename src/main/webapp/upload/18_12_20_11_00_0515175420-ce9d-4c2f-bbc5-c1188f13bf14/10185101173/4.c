#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[1001];
    int i=0;
    while(1)
    {
        arr[i]=getchar();
        if(arr[i]=='?')
            break;
        ++i;
    }
    --i;
    for(;i>=0;--i)
    {
        printf("%c",arr[i]);
    }
    return 0;
}
