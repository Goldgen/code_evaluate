#include <stdio.h>
#include <string.h>

int test(char c,char b[])
{
    int i;
    for(i=0;b[i]!=0;i++)
        if(c==b[i])
            return i;
    return -1;
}

int main()
{
    int n[100]={0};
    char a[100]={0},b[100]={0},c;
    gets(a);
    int i,t=0;
    for(i=0;i<strlen(a);i++)
    {
        c=a[i];
        if(c!=' ')
        {
            if(test(c,b)==-1)
            {
                b[t]=c;
                n[t]++;
                t++;
            }
            else
                n[test(c,b)]++;
        }
    }
    for(i=0;b[i]!=0;i++)
        printf("%c %d; ",b[i],n[i]);
    return 0;
}
