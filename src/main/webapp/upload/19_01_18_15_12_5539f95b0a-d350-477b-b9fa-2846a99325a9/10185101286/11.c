#include<stdio.h>
#include<ctype.h>
int main()
{
    char N;
    scanf("%c",&N);
    if(isalpha(N)&&islower(N)){
    switch(N)
    {
    case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("vowel");
        break;
    default:
        printf("consonant");
        break;
    }
    }
    else printf("ERROR");
    return 0;
}
