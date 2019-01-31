#include <stdio.h>
#include <string.h>

/* ??ch???sign?????? */
int getIndexOfSigns(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return ch - '0';
    }
    if(ch >= 'A' && ch <='F')
    {
        return ch - 'A' + 10;
    }
    if(ch >= 'a' && ch <= 'f')
    {
        return ch - 'a' + 10;
    }
    return -1;
}

/* ???????????? */
long hexToDec(char *source)
{
    long sum = 0;
    long t = 1;
    int i, len;
    len = strlen(source);
    for(i=len-1; i>=0; i--)
    {
        sum += t * getIndexOfSigns(*(source + i));
        t *= 16;
    }
    return sum;
}

int main()
{
    char hex[11];
    scanf("%s", hex);
    printf("%ld", hexToDec(hex));
    return 0;
}



