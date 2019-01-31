#include <stdio.h>
int main(void)
{
    char n[99];
    int i=0;
    while(getchar()!=EOF)
    {
        i++;
        n[i]=getchar();
    }
    for(i=i;i>0;i--)
    {
        if(n[i]!='a'&&n[i]!='e'&&n[i]!='i'&&n[i]!='o'&&n[i]!='u'&&n[i]!='A'&&n[i]!='E'&&n[i]!='I'&&n[i]!='O'&&n[i]!='U')
            printf("no");
        else printf("yes");
    }

    return 0;
}
