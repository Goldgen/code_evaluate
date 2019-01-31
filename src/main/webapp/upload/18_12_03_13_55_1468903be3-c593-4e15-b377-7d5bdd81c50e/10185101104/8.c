#include <stdio.h>
#include <string.h>

int main()
{
    char c[100];
    int n,i;
    gets(c);
    n=strlen(c)-1;
    for(i=0;i<strlen(c)/2;i++)
        if(c[i]!=c[n-i])
        {
            printf("False");
            return 0;
        }
    printf("True");
    return 0;
}
