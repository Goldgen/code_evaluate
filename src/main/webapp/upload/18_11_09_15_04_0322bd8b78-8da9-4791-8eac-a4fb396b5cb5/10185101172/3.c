#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char n=0;
    int b=1;
    while(n!='\n')
        {n=getchar();
        n=tolower(n);
        if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
           {printf("yes");
            b=0;
            break;
            }
    }
    if(b==1)
        printf("no");
return 0;
}
