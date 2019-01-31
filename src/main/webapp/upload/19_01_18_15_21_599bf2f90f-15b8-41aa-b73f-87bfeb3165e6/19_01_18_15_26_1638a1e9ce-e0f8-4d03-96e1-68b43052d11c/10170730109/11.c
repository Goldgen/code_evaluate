#include <stdio.h>

int main(void) {
    int l=getchar();
    if (islower(l))
	{
      switch(l){
        case 'a': case 'i': case 'e': case 'o': case 'u':
            printf("vowel");
            break;
        default:
            printf("consonant");
            break;
     }
    }
    else
        printf("ERROR");
    return 0;
}

