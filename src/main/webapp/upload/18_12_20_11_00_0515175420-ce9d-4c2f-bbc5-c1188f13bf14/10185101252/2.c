#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int T;
char **strs;;

int existNotAlpha(char * str){
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        int a = !isupper(str[i]);
        if(a)
            return 1;
    }
    return 0;
}

void wordSort(char** words, int cnt){
    for(int i = 0; i < cnt-1; i++){
        if(existNotAlpha(words[i]))
            continue;
        int Min = i;
        for(int j = i+1; j < cnt; j++){
            if(!existNotAlpha(words[j]) && strcmp(words[Min], words[j]) > 0){
                Min = j;
            }
        }
        if(Min != i){
            char * temp = words[Min];
            words[Min] = words[i];
            words[i] = temp;
        }
    }
}


char * sortStr(char* str){

    char **words;
    int i = 0, cnt = 0;
    int len = strlen(str);

    words = (char**)malloc(sizeof(char*)*200);
    while(i < len){
        words[cnt] = (char*)malloc(sizeof(char*)*205);
        sscanf(str + i, "%s", words[cnt]);
        i += strlen(words[cnt++]) + 1;
    }
    wordSort(words, cnt);
    char * ptr = (char*)malloc(sizeof(char) * 205);
    strcpy(ptr, words[0]);
    for(int i = 1; i < cnt; i++)
        sprintf(ptr, "%s %s", ptr, words[i]);

    for(int i = 0; i < cnt; i++)
        free(words[i]);
    free(words);
    free(str);
    return ptr;

}

int main(int argc, char* argv[]){

    scanf("%d", &T);
    getchar();
    strs = (char**)malloc(sizeof(char*) * T);
    for(int i = 0; i < T; i++){
        strs[i] = (char*)malloc((sizeof(char) * 205));
        gets(strs[i]);
        strs[i] = sortStr(strs[i]);
    }
    for(int i = 0; i < T; i++){
        printf("case #%d:\n%s\n", i, strs[i]);
        free(strs[i]);
    }
    free(strs);


    return 0;
}
