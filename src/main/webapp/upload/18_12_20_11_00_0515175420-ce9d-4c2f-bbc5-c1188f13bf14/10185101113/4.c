#include <stdio.h>
void hanshu()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='?')
        return;
    hanshu();
    printf("%c",ch);
}
int main(void)
{
    hanshu();
    return 0;
}
