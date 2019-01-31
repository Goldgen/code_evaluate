#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int long1,long2;
    char s1[81],s2[161],s3[81];
    scanf("%s %s",s1,s2);
    long1=strlen(s1);
    long2=strlen(s2);
    if(long1!=long2)
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    else
    {   strcpy(s3,s2);
        strcat(s2,s3);
        if(strstr(s2,s1)!=NULL)
            printf("\"%s\" is a rotation of \"%s\"",s1,s3);
        else
            printf("\"%s\" is NOT a rotation of \"%s\"",s1,s3);
    }
    return 0;

}