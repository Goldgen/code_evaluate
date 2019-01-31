#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    char str[51];
    for(int x=0;x<t;x++)
    {
        scanf("%s",str);
        char *pos;
        for(pos = str;*pos!='\0';pos++)
        {
            if(*pos=='Z')
				*pos = 'A';
            else
              (*pos)++;
        }
        printf("case #%d: %s\n",x,str);
    }

    return 0;
}