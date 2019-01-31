#include <stdio.h>
#include <stdlib.h>


int main()
{
    char x;
    scanf("%c",&x);
    if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u')printf("vowel");
    else if (x<'a'||x>'z')printf("ERROR");
	else printf("consonant");
    return 0;
}