#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[1000];
    int t[1000],i=0,j=0,flag=0;
    for(i=0;i<1000;++i)
        t[i]=0;
    i=0;
    while((arr[i]=getchar())!='\n')
    {
        if(arr[i]==' ')
            continue;
        for(j=0;j<i;++j)
        {
            if(arr[i]==arr[j])
            {
                ++t[j];
                flag=1;
                break;
            }
        }
        if(flag==0)
            ++t[i];
        ++i;
        flag=0;
    }
    i=0;
    while(arr[i]!='\n')
    {
        if(t[i]!=0)
        {
            printf("%c %d; ",arr[i],t[i]);
        }
        ++i;
    }
    return 0;
}
