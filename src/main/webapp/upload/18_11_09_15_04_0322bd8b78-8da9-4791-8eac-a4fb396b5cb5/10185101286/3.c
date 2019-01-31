#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char c;
    i=0;
    c=getchar();
    while(c!=EOF)
    {
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
            i+=1;
        c=getchar();
    }
        if(i==0)
        {
            printf("no");
        }
        else printf("yes");
    return 0;
}
