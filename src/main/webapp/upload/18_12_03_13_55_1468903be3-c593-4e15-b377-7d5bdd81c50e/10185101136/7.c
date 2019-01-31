#include <stdio.h>
#include <string.h>

int LongestWord(const char str[], char result[]);

int main()
{
    char str[85], result[85];
    gets(str);
    LongestWord(str, result);
    int lenResult = LongestWord(str, result);
    //printf("%d\n", lenResult);
    for (int i = 0; i < lenResult; ++i)
        printf("%c", result[i]);
    return 0;
}
int LongestWord(const char str[], char result[])
{
    int len = strlen(str);
    int maxLen = 0;
    int nowLen = 0;
    for (int i = 0; i < len; ++i){
        if (str[i] == ' '){
            if (nowLen > maxLen){
                maxLen = nowLen;
                for (int j = 0; j < maxLen; ++j)
                    result[j] = str[i - maxLen + j];
            }
            nowLen = 0;
        }
        else if (i == len - 1){
                nowLen++;
            if (nowLen > maxLen){
                maxLen = nowLen;
                for (int j = 0; j < maxLen; ++j)
                    result[j] = str[i - maxLen + 1 + j];
            }
        }
        else
            nowLen++;
    }
    return maxLen;
}
