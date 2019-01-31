#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[81],point[81];
    int i=0,times=0,j=0,m=0,first,flag=1;
    while((arr[i]=getchar())!='\n')
        ++i;
    while((point[j]=getchar())!='\n')
        ++j;
    for(int k=0;k<i;++k)
    {
        if(arr[k]==point[0])
        {
            m=1;
            for(int l=1;l<j;++l)
            {
                if(arr[k+l]!=point[l])
                {
                    m=0;
                    break;
                }
            }
            if(m==1)
            {
                ++times;
                if(flag==1)
                    {
                        first=k;
                        flag=0;
                    }
            }
            m=0;
        }
    }
    for(int k=0;k<j;++k)
        printf("%c",point[k]);
    printf(": %d time(s), first at %d",times,first);
    return 0;
}
