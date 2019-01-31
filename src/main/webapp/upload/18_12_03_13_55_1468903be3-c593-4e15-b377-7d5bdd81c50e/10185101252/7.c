#include <stdio.h>
#include <string.h>

//********** Specification of LongestWord **********
void LongestWord(const char str[], char result[]){
    int index, maxLen = 0, nowLen = 0, maxIndex;
    maxIndex = index = strlen(str);
    while(--index >= 0){
        if(str[index] == ' '){
            if(nowLen >= maxLen){
                maxIndex = index + 1;
                maxLen = nowLen;
            }
            nowLen = 0;
        }else{
            nowLen++;
            if(nowLen >= maxLen){
                maxIndex = index;
                maxLen = nowLen;
            }
        }

    }
    for(int i = 0; i < maxLen; i++)
        result[i] = str[maxIndex + i];
    result[maxLen] = '\0';
}

int main(int argc, char* argv[]){

    char str[1001], result[1001];
    gets(str);
    LongestWord(str, result);
    printf("%s", result);

    return 0;
}
