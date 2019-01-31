#include<stdio.h>
void words(char a_)
{   
    switch(a_)
    {
        case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		  printf("vowel");break;
        default:
		  printf("consonant");break;
    }
 }
 int main()
 {
    char ch ;
     scanf("%c",&ch);
     if(ch<'a'||ch>'z')
     printf("ERROR");
     else
     words(ch);
     return 0;
  }