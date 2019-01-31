#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sentence[100];
    char invert[100];
    scanf("%s",sentence);
    scanf("%s",invert);
    int i,k;
    k=0;
    if(strlen(sentence)==strlen(invert))
        {for(i=0;i<strlen(sentence);++i){
            if(sentence[i]!=invert[strlen(invert)-i-1])
                ++k;}
        if(k==0)printf("\"%s\" is a rotation of \"%s\"",sentence,invert);
        else printf("\"%s\" is NOT a rotation of \"%s\"",sentence,invert);
        }
    else printf("\"%s\" is NOT a rotation of \"%s\"",sentence,invert);


    return 0;
}
