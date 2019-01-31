#include <stdio.h>
#include <string.h>

char* i2a(int n, char *s)
{
    int i;
    for(i=0; i<100; i++)
    {
        if(n/10==0)
        {
            *(s+i) = n+48;
            *(s+i+1) = '\0';
            break;
        }
        else
        {
            *(s+i) = n%10+48;
            n/=10;
        }
    }
}

int main()
{
    int n, j;
    scanf("%d", &n);
    char s[100];
    i2a(n, s);
    for(j=strlen(s)-1; j>=0; j--)
        printf("%c", s[j]);
}
