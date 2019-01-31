#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[81];
    gets(str1);
    int i = strlen(str1);
    char str2[i+1];
    int j = 0;
    for(j=0;j<i;j++)
        str2[i-j-1]=str1[j];
        str2[i]='\0';
    if(strcmp(str1,str2)==0)
        printf("True");
    else
        printf("False");
        return 0;
}
