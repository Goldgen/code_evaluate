#include <stdio.h>
#include <string.h>

int main(void)

{
    char s1[81];
    char s2[81];
    char text[162];
    int i;
    scanf("%s %s",s1,s2);
    for(i = 0;i < strlen(s1)&&i < strlen(s2);i++){
        text[2 * i] = s1[i];
        text[2 * i + 1] = s2[i];
    }
    printf("%s",text);
    if(strlen(s1) > strlen(s2))
        printf("%s",&s1[i]);
    else if(strlen(s1) < strlen(s2))
        printf("%s",&s2[i]);
    return 0;
}
