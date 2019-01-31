#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
struct Q{
int sum=0;
char ch;
}s[1001];
int main()
{
    char str[1001];
    gets(str);
    int n=0,i,j;
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]!=' ')
        {
            bool mark=false;
            for(j=1;j<=n;j++)
            {
                if(s[j].ch==str[i])
                {
                    s[j].sum++;
                    mark=true;
                    break;
                }
            }
            if(mark==false)
            {
                n++;
                s[n].ch=str[i];
                s[n].sum=1;
            }
        }
    }
    for(i=1;i<n;i++)
        printf("%c %d; ",s[i].ch,s[i].sum);
    return 0;
}
