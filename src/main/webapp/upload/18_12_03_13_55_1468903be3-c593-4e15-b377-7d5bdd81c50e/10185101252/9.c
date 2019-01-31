#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

    char str[1001], substring[1001];
    gets(str);
    scanf("%s", substring);
    int len, subLen, cnt = 0, index = 0, first = -1;
    len = strlen(str);
    subLen = strlen(substring);
    while(index < len){
        if(strncmp(substring, str+index, subLen) == 0){
            cnt++;
            if(first == -1)
                first = index;
        }
        index++;
    }
    printf("%s: %d time(s), first at %d", substring, cnt, first);

    return 0;
}
