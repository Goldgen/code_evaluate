#include<stdio.h>
int main(void)
{
    char letter=0;
    scanf("%c",&letter);
    if(letter>='A')
        if(letter<='Z')
        {
            letter=letter+'a'-'A';
            printf("%c",letter);
        }
        else
            printf("ERROR");
    else
        printf("ERROR");
    return 0;
}
