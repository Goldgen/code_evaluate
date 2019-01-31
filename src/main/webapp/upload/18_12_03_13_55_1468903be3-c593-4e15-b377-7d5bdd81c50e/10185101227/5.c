#include<stdio.h>
#include<string.h>
int main (void)
{
    int i=0,rotate=1;
    char a = '0';
    char str1[81];
    char str2[81];
    char str3[81];
    scanf("%s %s",str1,str2);
    strcpy(str3,str2);
    int  l= strlen(str2);
    if(strlen(str1)!=l)
    {
        printf("\"%s\" is NOT a rotation of \"%s\"",str1,str3);
        return 0;
    }

    for(rotate=0;rotate<l;rotate++)
    {
        a = str2[l-1];
        for(i=l-1;i>0;i--)
        {
            str2[i] = str2[i-1];
        }
        str2[i] = a;
        if(strcmp(str1,str2)==0)
        {
            printf("\"%s\" is a rotation of \"%s\"",str1,str3);
            return 0;
        }
    }
    printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
    return 0;
}
