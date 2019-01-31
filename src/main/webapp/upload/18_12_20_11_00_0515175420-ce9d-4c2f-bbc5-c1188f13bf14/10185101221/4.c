#include <stdio.h>

void Not()
{
    char num;
    scanf("%c",&num);
    if (num=='?')
        return;
    Not();
    printf("%c",num);
}
int main()
{
     char n;
     scanf("%c",&n);
     Not();
     printf("%c",n);
     return 0;
}
