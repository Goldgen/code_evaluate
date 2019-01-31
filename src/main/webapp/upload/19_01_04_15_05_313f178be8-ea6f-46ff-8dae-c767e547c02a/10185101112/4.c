#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct str str;
struct str str[1000]{
    char ch;
    int len=0;
};
int main()
{
    char c;
    int i,j=0;

    while((c=getchar())!='\n')
    {
        int count=0;
        for(i=0;i<strlen(str);i++)
        {
            if(c==str[i].ch)
            {
                count++;
                str[i].len++;
            }

        }
        if(!count)
        {
            str[j].ch=c;
            j++;
        }


    }
    for(i=0;i<srelen(str);i++)
    printf("%c %d; ",str[i].ch,str[i].len);
    return 0;
}
