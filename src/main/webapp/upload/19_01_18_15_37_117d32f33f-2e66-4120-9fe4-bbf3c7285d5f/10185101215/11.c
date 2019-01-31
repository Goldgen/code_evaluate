#include<stdio.h>
#include<ctype.h>
int main ()
{
    char x;
    scanf("%c",&x);
    if(x>='a'&&x<='z')
     {
    switch(x)
    {
    case'a':printf("vowel");break;
    case'e':printf("vowel");break;
    case'i':printf("vowel");break;
    case'o':printf("vowel");break;
    case'u':printf("vowel");break;
    default:printf("consonant");
    break;
     }
     }
     else
        printf("ERROR");


}