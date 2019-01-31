#include<stdio.h>
#include<string.h>

int main (void)
{
    int i = 0;
    char save = '0';
    int rotate = 1;
    char str1[81] = "0";
    char str2[81] = "0";
    char str3[81] = "0";
    scanf("%s %s",str1,str2);
    strcpy(str3,str2);
    int len = strlen(str2);
    if(strlen(str1)!=len)
    {
        printf("\"%s\" is NOT a rotation of \"%s\"",str1,str3);
        return 0;
    }

    for(rotate=0;rotate<len;rotate++)
    {
        save = str2[len-1];
        for(i=len-1;i>0;i--)
        {
            str2[i] = str2[i-1];
        }
        str2[i] = save;
        if(strcmp(str1,str2)==0)
        {
            printf("\"%s\" is a rotation of \"%s\"",str1,str3);
            return 0;
        }
    }
    printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
    return 0;
}
