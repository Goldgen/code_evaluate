#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char s1[85], s2[85], s3[200];
    scanf("%s", s1);
    scanf("%s", s2);
    if (strlen(s1) != strlen(s2)){
        printf("\"%s\" is NOT a rotation of \"%s\"", s1, s2);
        return 0;
    }
    int len = strlen(s2) * 2;
    strcpy(s3, s2);
    strcat(s3, s2);
    for (int i = 0; i < len / 2; ++i)
        if (s3[i] == s1[0]){
            bool flag = true;
            for (int j = i; j < i + len / 2; ++j)
                if (s3[j] != s1[j - i]){
                    flag = false;
                    break;
                }
            if (flag){
                printf("\"%s\" is a rotation of \"%s\"", s1, s2);
                return 0;
            }
        }
    printf("\"%s\" is NOT a rotation of \"%s\"", s1, s2);
    return 0;
}
