#include <stdio.h>
#include <string.h>
int main(){
    char s1[100], s2[100], S[200];
    int len1, len2, x = 0, y, z, flag = 0;
    scanf("%s %s", s1, s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    if(len1!=len2)
        printf("\"%s\" is NOT a rotation of \"%s\"", s1, s2);
    else{
        for(int i = 0; i < len1; ++i)
            S[i] = s1[i];
        for(int j = len1; j < 2*len1; ++j)
            S[j] = s1[j-len1];
        while(x<len1 + len2 + 1){
            y = 0, z = x;
            while(s2[y]&&S[z] == s2[y]){
                ++y;
                ++z;
            }
            if(s2[y] == '\0'){
                flag = 1;
                break;
            }
            ++x;
        }
        if(flag == 1)
            printf("\"%s\" is a rotation of \"%s\"", s1, s2);
        else
            printf("\"%s\" is NOT a rotation of \"%s\"", s1, s2);
    }
    return 0;
}
