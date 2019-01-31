#include <stdio.h>
#include <string.h>
void LongestWord(const char str[], char result[]){
    int max = 0, cnt = 0;
    char temp[100] = {'\0'};
    for(int i = 0; i < strlen(str)+1; ++i){
        if(str[i] == ' ' || str[i] == '\t' || str[i] == '\0'){
            if(cnt > max){
                max = cnt;
                strcpy(result,temp);
            }
            cnt = 0;
        }
        else{
            temp[cnt] = str[i];
			++cnt;
        }
    }
    printf("%s\n", result);
}
int main(){
    char data[100] = {'\0'}, ans[100] = {'\0'};
    gets(data);
    LongestWord(data, ans);
    return 0;
}
