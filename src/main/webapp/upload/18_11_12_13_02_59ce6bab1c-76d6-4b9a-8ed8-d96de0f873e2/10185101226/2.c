#include <stdio.h>
#include <stdlib.h>
char change(int n)
{
    char a=(char)n;
    return a;
}
int main()
{
    int st,ed;
    int i;
    scanf("%d%d",&st,&ed);
    if(st<=32)
        printf("None");
    else
    {
        for(i=st;i<ed;++i)
        {
            printf("%d      %c",i,change(i));
            printf("\n");
        }
        printf("%d      %c",ed,change(ed));
    }
    return 0;
}
