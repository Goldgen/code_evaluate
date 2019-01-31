#include <stdio.h>
#include <string.h>

int main()
{
    char s1[81],s2[81];
    int m=0;
    scanf("%s %s",s1,s2);
    if(strlen(s1)>=strlen(s2)){
        for(m=0;m<strlen(s2);m++){
            printf("%c",s1[m]);
            printf("%c",s2[m]);
        }
        for(;m<strlen(s1);m++){
            printf("%c",s1[m]);
        }
    }
    else if(strlen(s1)<strlen(s2)){
        for(m=0;m<strlen(s1);m++){
            printf("%c",s1[m]);
            printf("%c",s2[m]);
        }
        for(;m<strlen(s2);m++){
            printf("%c",s2[m]);
        }
    }
    return 0;
}
