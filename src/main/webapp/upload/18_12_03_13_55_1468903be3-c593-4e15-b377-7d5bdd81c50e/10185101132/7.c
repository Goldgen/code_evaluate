#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 90

void WordLoc(/* in*/ char rstr[],
             /*out*/  int rloc[]);
int WordLen(/*in*/ char* rwordloc);


int main()
{
    char src[MAXSIZE] = {0};
    gets(src);

    int loc[MAXSIZE];
    int i;
    for(i = 0; i < MAXSIZE; i++){
        loc[i] = -1;
    }
    WordLoc(src, loc);

    int maxLen = 0;
    int maxLoc = -1;
    i = 0;
    while(loc[i] != -1){
        int curWordLen = WordLen(src+loc[i]);
        if(curWordLen > maxLen){
            maxLen = curWordLen;
            maxLoc = loc[i];
        }

        i++;
    }

    for(i = 0; i < maxLen; i++){
        printf("%c", src[maxLoc+i]);
    }

    return 0;
}

void WordLoc(/* in*/ char rstr[],
             /*out*/  int rloc[])
{
    int rstrLen = strlen(rstr);
    int inWord = 0;
    int i, j;
    i = j = 0;
    for(i = 0; i < rstrLen; i++){
        if(isspace(rstr[i])){
            inWord = 0;
        }else if(inWord == 0){
            inWord = 1;
            rloc[j] = i;
            j++;
        }
    }
}

int WordLen(/*in*/ char* rwordloc){
    int cnt = 0;
    int i = 0;
    while(!isspace(rwordloc[i]) && rwordloc[i] != 0){
        cnt++;
        i++;
    }
    return cnt;
}
