#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    int m,n;
    scanf("%s",str);
    n = strlen(str);
    for(int x=0;x<8;x++)
    {
        str[x] = toupper(str[x]);
        m = str[x]-'A'+1;
        if(m>=1&&m<=18)
            m = (m-1)/3 + 2;
        else if(m==19)
            m = 7;
        else if(m>19&&m<23)
            m = 8;
        else
            m = 9;
        printf("%d",m);
    }
    return 0;
}