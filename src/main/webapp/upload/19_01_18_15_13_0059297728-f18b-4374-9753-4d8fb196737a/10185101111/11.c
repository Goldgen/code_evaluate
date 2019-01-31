#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z'){
       switch(a){
           case 'a':printf("vowel");break;
           case 'e':printf("vowel");break;
           case 'i':printf("vowel");break;
           case 'o':printf("vowel");break;
           case 'u':printf("vowel");break;
           default:printf("consonant");break;
       }
    }else{
        printf("ERROR");
    }

}