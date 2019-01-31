#include <stdio.h>
#include <stdlib.h>

char Sentence(char a[],int n)
{
    if(n==0) return 0;
    if(n>=1)
    {
        printf("%c",a[n-1]);
        return Sentence(a,n-1);
    }
}

int main()
{
    int i=0,x;
    char words[100],y;
    while((y=getchar())!='?')
    {
        words[i++]=y;
    }
    Sentence(words,i);
    return 0;
}
