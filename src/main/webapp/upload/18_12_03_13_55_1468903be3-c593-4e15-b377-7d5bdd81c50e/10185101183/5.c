#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, n=0, d=0;
    char x;
    char str1[100], str2[100], str3[100];
    scanf("%s%s", str1, str2);
    strcpy(str3, str1);
    n = strlen(str1);

    if(strlen(str1)==strlen(str2))
    for(i=0; i<100; i++)
    {
        if(strcmp(str1, str2)==0)
            {
                d = 1;
                break;
            }
        else
            {
                x = str1[0];
                for(j=0; j<n-1; j++)
                    str1[j] = str1[j+1];
                str1[n-1] = x;
            }
    }

    if(d==1)
        printf("\"%s\" is a rotation of \"%s\"", str3, str2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"", str3, str2);
}
