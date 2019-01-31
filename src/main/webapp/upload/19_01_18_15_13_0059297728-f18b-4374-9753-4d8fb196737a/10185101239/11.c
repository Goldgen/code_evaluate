#include <stdio.h>
#include <stdlib.h>

int main()
{char input;
scanf("%c",&input);
if(input>='a'&&input<='z')
{switch(input)
{case 'a': printf("vowel");break;
case 'e': printf("vowel");break;
case 'i': printf("vowel");break;
case 'o': printf("vowel");break;
case 'u': printf("vowel");break;
default: printf("consonant");break;
}}
else 
    printf("ERROR");
return 0;
}