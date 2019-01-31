#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    char lacestr[200];
    int len1,len2;
    scanf("%s %s",str1,str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    strcpy(lacestr,str2);
    strcat(lacestr,str2);
    if(len1==len2)
    {
    if(strstr(lacestr,str1)>0)
        printf("\"%s\" is a rotation of \"%s\"",str1,str2);
     else
        printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
    }
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
           return 0;
}