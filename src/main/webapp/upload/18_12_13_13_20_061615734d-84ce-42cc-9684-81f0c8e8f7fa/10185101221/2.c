#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* strmcpy(char *t,char *s,int m)
{
    for(int i=m;i<=strlen(s);i++)
        t[i-m]=s[i];
    return t;

}
int main()
{
    char arr[100];
    char cp[100];
    int m=0;
    gets(arr);
    scanf("%d",&m);
    strmcpy(cp,arr,m);
    printf("%s",cp);

    return 0;
}
