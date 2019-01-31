#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c",&ch);
    if(ch<97||ch>122){
        printf("ERROR");
    }
    else{
        switch(ch)
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("vowel");
                break;
            default:
                printf("consonant");
				break;
        }
    }
    return 0;
}