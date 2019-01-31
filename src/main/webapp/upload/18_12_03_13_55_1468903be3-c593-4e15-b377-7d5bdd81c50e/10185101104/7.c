#include <stdio.h>
#include <string.h>

void LongestWord(const char str[], char result[])
{
    int i,mark=0,start=0,max=0,n=0;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            if(max<n)
            {
                max=n;
                start=mark;
            }
            n=0;
            mark=i+1;
        }
        else
            n++;
    }
    if(max<n)
    {
        max=n;
        start=mark;
    }
    for(i=0;i<max;i++)
        result[i]=str[i+start];
    result[max]=0;
}

int main()
{
    char s[100],result[100];
    gets(s);
    LongestWord(s,result);
    printf("%s\n",result);
    return 0;
}
