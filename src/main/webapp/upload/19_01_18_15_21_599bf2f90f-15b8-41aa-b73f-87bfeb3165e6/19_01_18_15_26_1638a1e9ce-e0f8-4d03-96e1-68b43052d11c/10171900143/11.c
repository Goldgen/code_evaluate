#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z'){
    switch (a){
case 'a':case 'e':case 'i':case 'o':case 'u':
    printf("vowel");break;
default:
    printf("consonant");break;
    }
    }
    else{
        printf("ERROR");
    }
    return 0;
}
