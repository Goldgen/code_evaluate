#include <stdio.h>
#include <stdlib.h>
#define ARRA_SIZE 80
void LeftOutput(int min, int len, char ch[]);

int main()
{
    char S1[ARRA_SIZE];
    char S2[ARRA_SIZE];
    scanf("%s",S1);
    scanf("%s",S2);
    size_t len1 = strlen(S1);
    size_t len2 = strlen(S2);
    int min = len1;
    if (len2<len1) min = len2;
    int i;
    for (i=0; i<min; i++){
        printf("%c%c",S1[i],S2[i]);
    }
    if (min<len1) LeftOutput(min,len1,S1);
    else if (min<len2) LeftOutput(min,len2,S2);

    return 0;
}

void LeftOutput(int min, int len, char ch[]){
    int i;
    for (i=min; i<len; i++){
        printf("%c",ch[i]);
    }
    return;
}
