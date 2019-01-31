#include <stdio.h>
#include <stdlib.h>
#define ARRA_SIZE 100

void LongestWord(const char str[], char result[]);

int main()
{
    char str[ARRA_SIZE] = {'\0'};
    char result[ARRA_SIZE] = {'\0'};
    gets(str);

    LongestWord(str, result);

    puts(result);
    return 0;
}

void LongestWord(const char str[], char result[]){
    int x;//????????str??????
    size_t len = strlen(str);
    int count = 0; int max = 0;
    int i = 0; int j;
    while (i<len){
        j = i;
        while((str[j]!=' ')&&(j<len)){
            count++;
            j++;
        }
        if (count>max){
            max = count;
            x = i;
        }
        i = j+1;
        count = 0;
    }

    for (i=0; i<max; i++){
        result[i] = str[x+i];
    }
    return;
}
