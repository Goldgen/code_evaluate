#include <stdio.h>
#include <string.h>
int main()
{   
    int a,b,c;
    char s1[81],s2[161],s3[81];
    scanf("%s %s",s1,s2);
    a=strlen(s1);
    b=strlen(s2);
    if(a!=b)
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    else
    {   
        strcpy(s3,s2);
        strcat(s2,s3);
        if(strstr(s2,s1)!=NULL)
            printf("\"%s\" is a rotation of \"%s\"",s1,s3);
        else
            printf("\"%s\" is NOT a rotation of \"%s\"",s1,s3);
    }
    return 0;

}