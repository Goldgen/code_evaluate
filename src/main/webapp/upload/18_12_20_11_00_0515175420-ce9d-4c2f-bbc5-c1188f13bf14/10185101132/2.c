#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSIZE 202

int strDivide( /*in*/ char src[], int srcSize, /*out*/ char dest[][MAXSIZE]);
void sort(char nstr[][MAXSIZE], int n);
int FindWords(/*in*/char nstr[][MAXSIZE], int n, /*out*/int indexOfWord[]);
int isWord(char word[]);

int main()
{
    int t;
    scanf("%d", &t);
    getchar();

    int i;
    for(i = 0; i < t; i++){
        char strsrc[MAXSIZE] = {0};
        char strdest[MAXSIZE][MAXSIZE] = {{0}};
        gets(strsrc);
        int strSize = strDivide(strsrc, strlen(strsrc), strdest);

        sort(strdest, strSize);

        printf("case #%d:\n", i);
        printf("%s", strdest[0]);
        int j;
        for(j = 1; j < strSize; j++){
            printf(" %s", strdest[j]);
        }
        if(i < t - 1){
            printf("\n");
        }
    }

    return 0;
}

int strDivide( /*in*/ char src[], int srcSize, /*out*/ char dest[][MAXSIZE]){
    int i = 0, j = 0, k = 0;
    for(i = 0; i < srcSize; i++){
        if(isspace(src[i])){
            k = 0;
            j++;
        }else{
            dest[j][k] = src[i];
            k++;
        }
    }

    return j + 1;
}

void sort(char nstr[][MAXSIZE], int n){
    int indexOfWord[MAXSIZE] = {0};
    int nwords = FindWords(nstr, n, indexOfWord);

    int i, j;
    for(i = 0; i < nwords; i++){
        for(j = 0; j < nwords - 1; j++){

            int currIndex = indexOfWord[j];
            int postIndex = indexOfWord[j + 1];

            if(strcmp(nstr[currIndex], nstr[postIndex]) > 0){
                char temp[MAXSIZE];
                strcpy(temp, nstr[currIndex]);
                strcpy(nstr[currIndex], nstr[postIndex]);
                strcpy(nstr[postIndex], temp);
            }
        }
    }
}

int FindWords(/*in*/char nstr[][MAXSIZE], int n, /*out*/int indexOfWord[]){
    int i, j = 0;
    for(i = 0; i < n; i++){
        if(isWord(nstr[i])){
            indexOfWord[j] = i;
            j++;
        }
    }
    indexOfWord[j] = -1;

    return j;
}

int isWord(char word[]){
    int flag = 1;
    int i;
    for(i = 0; i < strlen(word); i++){
        if(isupper(word[i]) == 0){
            flag = 0;
            break;
        }
    }

    return flag;
}