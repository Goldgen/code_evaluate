#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* i2a(char* p,int n);

int main()
{
    int a;
    scanf("%d",&a);
    char str[100];
    char* c = i2a(str,a);
    int len = strlen(c);
    char d[100] = {'0'};
    int j;
    for(j = len-1;j >= 0;j--)
    {
        d[len-j-1] = c[j];
    }
    d[j] = '\0';
    printf("%s",d);
    return 0;
}

char* i2a(char* p,int n)
{
    int i;
    for(i = 0;n > 0;i++)
    {
        p[i] = (n%10) + '0';
        n /= 10;
    }
    p[i] = '\0';
    return p;
}
