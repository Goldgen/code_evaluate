#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cnt=0,num[100];
    for(int i=0;i<100;++i)
    {
        if(i%3==0&&i%10==6)
        {
            num[cnt]=i;
            ++cnt;
        }
    }
    for(int j=0;j<cnt;++j)
    {
        printf("%d",num[j]);
        if(j<cnt-1)
            printf(" ");
    }
    return 0;
}
