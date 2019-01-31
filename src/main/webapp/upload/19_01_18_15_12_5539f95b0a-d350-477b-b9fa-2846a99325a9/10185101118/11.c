#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(!(a>='a'&&a<='z'))
        printf("ERROR");
    else
    {
        switch(a)
        {
        case 'a':case 'e':case 'i':case 'o':case 'u':
            printf("vowel");break;
        default:printf("consonant");break;
        }
    }
    return 0;
}
