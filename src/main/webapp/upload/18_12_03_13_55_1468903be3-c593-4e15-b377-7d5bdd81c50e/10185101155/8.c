#include <stdio.h>
#include <string.h>
int main()
{
    char str[81];
    gets(str);
    int m = 0,len,x;
    len = strlen(str);
    for(x=0;x<len/2;x++)
    {
        if(str[x]==str[len-1-x])
            m++;
    }
    if(m==len/2)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}