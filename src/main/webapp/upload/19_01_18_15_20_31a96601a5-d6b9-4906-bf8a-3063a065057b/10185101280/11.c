#include<stdio.h>
#include<stdlib.h>
void main()
{
    char a;
    scanf("%c",&a);
    if(!islower(a))
        printf("Error");
    else
    {
        switch(tolower(a))

    {case 'a':case 'e':case 'i':case 'o':case'u':
        printf("vowel");
        break;
	 default :
	 printf("consonant");
	 break;

    }
}
return 0;
}
