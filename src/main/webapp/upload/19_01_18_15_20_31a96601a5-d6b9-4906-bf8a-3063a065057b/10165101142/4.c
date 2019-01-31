#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c",ch-'A'+'a');
    else
        printf("ERROR");
    return 0;
}


