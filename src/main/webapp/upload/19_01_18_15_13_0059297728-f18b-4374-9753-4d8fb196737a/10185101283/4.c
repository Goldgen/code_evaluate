#include<stdio.h>
int main()
{
    char big,small;
    scanf("%c",&big);
if((big>='A')&&(big<='Z'))
    {small = 'a'- 'A' +big;
    printf("%c",small);
    }
else
        printf("ERROR");
    return 0;
}
