#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int n=0,x,y=0;
    while(scanf("%s",&s[n])!=EOF)
    {
        n++;
    }
    for(x=0;x<=n;x++)
    {
        if(s[x]=='a'||s[x]=='e'||s[x]=='i'||s[x]=='o'||s[x]=='u')
        {
            y++;
        }
        else
        {
            if(s[x]=='A'||s[x]=='E'||s[x]=='I'||s[x]=='O'||s[x]=='U')
            {
                y++;
            }
        }
    }
    if(y==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}