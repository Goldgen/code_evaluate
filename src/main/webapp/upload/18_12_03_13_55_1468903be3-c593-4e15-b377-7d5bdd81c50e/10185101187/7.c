#include <stdio.h>
#include <string.h>
#include <math.h>

char LongestWord(char str[])
{
    int i, j, s=0, x, y;
    char a[100][100];

    for(i=0; i<100; i++)
    {
        for(j=0; j<100; j++)
        {
            if(str[s]!=' ' && str[s]!='\0')
            {
                a[i][j] = str[s];
                s++;
            }
            else
            {
                a[i][j] = '0';
                s++;
                break;
            }
        }
    }

    for(i=0, y=0; i<99; i++)
    {
        if(y<strlen(a[i]))
        {
            y = strlen(a[i]);
            x = i;
        }
    }
    printf("%s", a[x]);
}

int main()
{
    char str[100];
    scanf("%s", str);
    LongestWord(str);
}
