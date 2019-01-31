#include <stdio.h>
#include<string.h>

char*  CharsReplace(char *p)
{

    int a,b=0;
    a=strlen(p);
    while(b<=a-1)
    {
        if(p[b]!=90)
        {
            p[b]=p[b]+1;
        }
       else
        {
            p[b]=p[b]-25;
        }
        b++;
    }
    return p;
}

void solve()
{
    char s[60];  scanf("%s",s);
    printf("%s\n",CharsReplace(s));
}

int main()
{
    int i,t; scanf("%d\n",&t);
    for (i=0;i<t;i++) 
    {
        printf("case #%d: ",i); 
        solve();
        if(i!=t-1)
        {
            printf("\n");
        }
    }
    return 0;
}