#include <stdio.h>
#include <ctype.h>

char tran(int);

int main(void)
{
    int st = 0;
    int ed = 0;
    scanf("%d %d",&st,&ed);
    int i = st;
    int checker = 0;
    for(;i<=ed;i++)
    {
        if(tran(i)!= EOF)
        {
        if(i<100)
            {
                printf("%d%7c\n",i,tran(i));
                checker = 1;
            }
        else
            {
                printf("%d%6c\n",i,tran(i));
                checker = 1;
            }
        }
    }
    if (checker==0)
        printf("NONE");
}

char tran(int x)
{
    char y;
    if (isgraph(x))
    {
        y = (char)x;
        return y;
    }
    else
        return EOF;
}
