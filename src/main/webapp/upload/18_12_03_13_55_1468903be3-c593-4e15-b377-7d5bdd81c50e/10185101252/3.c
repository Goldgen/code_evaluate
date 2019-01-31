#include <stdio.h>
#include <string.h>

char str1[1001], str2[1001], laceString[1001];
int len1, len2;
int main(int argc, char* argv[]){

    scanf("%s", str1);
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    int i = 0, j = 0, index = 0;
    laceString[len1+len2] = '\0';
    while(i < len1 || j < len2){
        if(i < len1)
            laceString[index++] = str1[i++];
        if(j < len2)
            laceString[index++] = str2[j++];
    }
    printf("%s", laceString);

    return 0;
}
