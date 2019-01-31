#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter=0;
    scanf("%c",&letter);
    
    if (islower(letter))
    
        switch (letter)
	
		{
            case 'a':case 'e':case 'i':case 'o':case 'u':
               printf("vowel");
			   break;
            default:
               printf("consonant");
               break;
               
       }
    
    else
        printf("ERROR");
 
    
    return 0;
    
    
}
