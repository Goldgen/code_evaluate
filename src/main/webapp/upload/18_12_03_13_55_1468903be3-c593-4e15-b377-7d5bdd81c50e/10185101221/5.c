#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[100];
    char s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    if(strlen(s1)!=strlen(s2))
    {
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
        return 0;
    }
    int k=0;
    int y=0;
    there:
     y=k;
    for(int i=0;i<strlen(s1);i++)
    {
         if(i==strlen(s1)-1)
        {
              printf("\"%s\" is a rotation of \"%s\"",s1,s2);
              return 0;
        }
        if(s1[i]==s2[y])
        {
            if(y==strlen(s2)-1)
            {
                 y=0;
                 continue;
            }
            y++;
            continue;
        }
        else
        {
            k++;
            if(k==strlen(s2))
            {
                 printf("\"%s\" is NOT a rotation of\"%s\"",s1,s2);
                 return 0;
            }
            goto there;
        }
    }
    printf("\"%s\" is NOT a rotation of\"%s\"",s1,s2);
    return 0;
}
