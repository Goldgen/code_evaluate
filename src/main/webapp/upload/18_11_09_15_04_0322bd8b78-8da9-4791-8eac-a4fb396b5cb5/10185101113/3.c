#include <stdio.h>
#include<ctype.h>
int main()
{
    char c;
    int n=0;
    c=getchar()
    while (c!=EOF)
    {
        c=tolower(c);
        switch(c)
        {
        case 'a':case 'e':case 'i':case 'o':case 'u':
            n++;
            break;
        default:
            break;
        }
        getchar();
    }
    if(n>0)
            printf("yes");
        else
            printf("no");

    return 0;
}
