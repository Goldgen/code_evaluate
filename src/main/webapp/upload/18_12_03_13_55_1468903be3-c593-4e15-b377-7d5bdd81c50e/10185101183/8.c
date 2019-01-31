#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0;
    char str1[100];
    gets(str1);
    int a=strlen(str1);
    char str2[100];
    for(int i=0;i<a;++i)
    {
        str2[i]=str1[a-i-1];
    }
    for(int i=0;i<a;++i)
    {
        if(str1[i]!=str2[i])
            k=1;
    }
    if(k)
        printf("False");
    else
        printf("True");
}
