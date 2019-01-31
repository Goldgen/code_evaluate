#include<stdio.h>

int main()
{
char ch;
scanf("%c", &ch);
    if(ch>='a'&&ch<='z')
	{switch(ch){
     case'a':case'e':case'i':case'o':case'u':
      printf("vowel");
			break;
		default:
      printf("consonant");
			break;}
    }
     else
		 printf("ERROR");
}

