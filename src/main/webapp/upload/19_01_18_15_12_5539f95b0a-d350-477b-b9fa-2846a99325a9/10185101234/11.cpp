#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(islower(ch))
    {
       if( ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            printf("vowel");
        else
            printf("consonant");
    }
    else
        printf("ERROR");
    return 0;
}

