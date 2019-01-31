#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch<=90 && ch>=65)
        printf("%c",ch-'A'+'a');
    else
        printf("ERROR");
    return 0;
}
