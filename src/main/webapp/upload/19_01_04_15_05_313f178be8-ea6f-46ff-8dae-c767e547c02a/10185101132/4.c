#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct charCount{
    char mychar;
    int cnt;
};

typedef struct charCount ccnt_t;

int main()
{
    char src[105] = {0};
    gets(src);
    int srcLen = strlen(src);
    ccnt_t myCnt[srcLen];
    char hasOccurred[129];
    int i;
    for(i = 0; i < 129; i++){
        hasOccurred[i] = -1;
    }
    int chCnt = 0;


    for(i = 0; i < srcLen; i++){
        int curChar = src[i];
        if(isspace(curChar) == 0){
            if(hasOccurred[curChar] == -1){
                hasOccurred[curChar] = chCnt;
                myCnt[chCnt].mychar = curChar;
                myCnt[chCnt].cnt = 1;
                chCnt++;
            }else{
                myCnt[hasOccurred[curChar]].cnt++;
            }
        }
    }

    int j;
    for(j = 0; j < chCnt; j++){
        printf("%c %d; ", myCnt[j].mychar, myCnt[j].cnt);
    }

    return 0;
}
