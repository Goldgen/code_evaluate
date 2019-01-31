#include <stdio.h>
#include <ctype.h>

int PrintIntToChar(char n);

int main()
{
    int st, ed;
    scanf("%d %d", &st, &ed);
    int flag = 0;
    char i;
    for(i = st; i <= ed && i != 127; i++)
    {
        if(PrintIntToChar(i))
        {
            flag = 1;
            if(i < ed && i != 126)
                printf("\n");
        }

    }
    if(!flag)
        printf("NONE");
    return 0;
}

int PrintIntToChar(char n)
{
    if(isgraph(n))
    {
        printf("%d", n);
        if(n < 100)
            printf("      ");
        else
            printf("     ");
        printf("%c", n);
        return 1;
    }
    return 0;
}
