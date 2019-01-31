#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int i,j;
    for(i=0;i<20;++i)
        scanf("%c",&str);
    for(j=0;j<20;++j)
    {

    switch(str[j])
    {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'A': case 'E': case 'I': case 'O': case 'U':
        printf("yes");
        break;
        default:
            printf("no");
            break;
    }
    }

    return 0;
}
