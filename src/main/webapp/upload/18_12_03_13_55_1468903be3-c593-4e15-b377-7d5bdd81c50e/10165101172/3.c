#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j;
    char s1[85],s2[85],s[170];
    scanf("%s %s",s1,s2);
    for (i = 0,j = 0;s1[i] != '\0' && s2[i] != '\0';i++,j += 2){
        s[j] = s1[i];
        s[j+1] = s2[i];
    }
    s[j] = '\0';
    printf("%s",s);
    for (j = i;j < strlen(s1[i]=='\0'?s2:s1);j++){
        printf("%c",(s1[i]==0?s2:s1)[j]);
    }
    printf("\n");
}
