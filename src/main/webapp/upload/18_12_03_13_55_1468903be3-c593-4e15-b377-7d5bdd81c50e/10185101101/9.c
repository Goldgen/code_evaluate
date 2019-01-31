#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sentence[100];
    gets(sentence);
    int i,k;
    k=0;

    {for(i=0;i<strlen(sentence);++i){
        if(sentence[i]!=sentence[strlen(sentence)-i-1])
            ++k;}
    if(k==0)printf("^_^");
    else printf("^_");
    }
        return 0;
}