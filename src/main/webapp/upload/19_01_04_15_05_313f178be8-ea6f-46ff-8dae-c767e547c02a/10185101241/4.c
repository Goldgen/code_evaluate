#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char words[100];
    gets(words);
    int i,x,j,z;
    x=strlen(words);
    int count[x];
    for(j=0;j<x;j++)
    {
        count[j]=0;
        for(z=0;z<j;z++)
        {
            if(words[j]==words[z]) break;
        }
        for(i=0;i<x;i++)
        {
            if(words[i]==words[j]) count[j]+=1;
        }
        printf("%c %d;",words[j],count[j]);
    }
    return 0;
}
