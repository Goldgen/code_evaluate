#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char in[80];
    int out[80],i,j=0;
    gets(in);
    while(in[j]!='\0')
    {
        switch(tolower(in[j]))
     {
            case 'a': case 'b': case 'c':out[j]=2;break;
            case 'd': case 'e': case 'f':out[j]=3;break;
            case 'g': case 'h': case 'i':out[j]=4;break;
            case 'j': case 'k': case 'l':out[j]=5;break;
            case 'm': case 'n': case 'o':out[j]=6;break;
            case 'p': case 'q': case 'r':case 's':out[j]=7;break;
            case 't': case 'u': case 'v':out[j]=8;break;
            case 'w': case 'x': case 'y':case 'z':out[j]=9;break;
            default:printf("wrong!");break;
     }
     j++;
    }
    for(i=0;i<8;i++)
        printf("%d",out[i]);
}
