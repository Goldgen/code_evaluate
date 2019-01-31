#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100];
    int cnt = 0, j = 0, k, l, flag = -1, len1, len2;
    gets(s1);
    gets(s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    while(j < len1 - len2 + 1){
        k = 0, l = j;
        while(s2[k] && s1[l] == s2[k]){
            ++k;
            ++l;
        }
        if(s2[k] == '\0'){
            ++cnt;
            if(cnt == 1)
                flag = j;
        }
        ++j;
    }
    printf("%s: %d time(s), first at %d", s2, cnt, flag);
    return 0;
}
