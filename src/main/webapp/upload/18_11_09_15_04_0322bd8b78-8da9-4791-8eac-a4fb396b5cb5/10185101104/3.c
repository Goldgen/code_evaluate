#include <stdio.h>

int main()
{
    char a;
    char b[10]={'a','e','i','o','u','A','E','I','O','U'};
    int mark=0,i;
    while((a=getchar())!=EOF)
    {
        for(i=0;i<9;i++)
        {
            if(a==b[i])
                mark++;
        }
    }
    if(mark>0)
        printf("yes");
    else
        printf("no");
    return 0;
}
