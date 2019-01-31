#include <stdio.h>
#include <stdlib.h>

int dight(int n)
{
    char m=n;
    return m;
}
int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    const int a1=a;
    if(b<33||a>126)
        printf("NONE");
    else
    {
        if(a>32&&b<127)
        {for(i=0;i<(b-a1+1);++i)
        {
            if(i==(b-a1))
                printf("%-3d     %c",a,dight(a));
            else
                printf("%-3d     %c\n",a,dight(a));
            ++a;
        }
        }
        else if(a1<33&&b<127)
            {   a=33;
                for(i=0;i<(b-33+1);++i)
        {
            if(i==(b-a1))
                printf("%-3d     %c",a,dight(a));
            else
                printf("%-3d     %c\n",a,dight(a));
            ++a;
        }
        }
        else if(a>32&&b>126)
            {   b=126;
                for(i=0;i<(126-a1+1);++i)
        {
            if(i==(b-a1))
                printf("%-3d     %c",a,dight(a));
            else
                printf("%-3d     %c\n",a,dight(a));
            ++a;
       }}}
    return 0;
}
