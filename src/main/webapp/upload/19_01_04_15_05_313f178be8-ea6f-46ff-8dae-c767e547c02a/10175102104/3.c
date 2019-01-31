#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,m,n,i,length=0;
    char s[1001],ss[1001];
    while(scanf("%s",s)!='#')
    {
        int num=0;
        scanf("%s",ss);
        a=strlen(s);
        b=strlen(ss);
        for(m=0;m<a;m++)
        {
            int x=m;
            for(n=0;n<b;n++)
            {
                int y=n;
                while((s[x]==ss[y])&&x<a&&y<b)
                {
                    length++;
                    x++;
                    y++;
                }
                if(length==b)
                {
                    num++;
                    for(i=m;i<a-b;i++)
                    {
                        s[i]==s[i+b];
                    }
                    length=0;
                }
                else
                {
                    length=0;
                }

            }
        }
        printf("%d",num);
    }
    return 0;
}