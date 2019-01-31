#include<stdio.h>
unsigned int change(char ch)
{
    switch(ch){
    case '0': return 0;break;
    case '1': return 1;break;
    case '2': return 2;break;
    case '3': return 3;break;
    case '4': return 4;break;
    case '5': return 5;break;
    case '6': return 6;break;
    case '7': return 7;break;
    case '8': return 8;break;
    case '9': return 9;break;
    case 'a': case 'A': return 10;break;
    case 'b': case 'B': return 11;break;
    case 'c': case 'C': return 12;break;
    case 'd': case 'D': return 13;break;
    case 'e': case 'E': return 14;break;
    case 'f': case 'F': return 15;break;
    default: break;
    }
}
unsigned int f(int n)
{
    int a=1;
    for(int j=0;j<n;++j)
        a=a*16;
    if(n==0)
        return 1;
    return a;
}
int main()
{
    char s[9];
    int i;
    unsigned int x=0;
    for(i=0;;++i)
    {
        s[i]=getchar();
        if(s[i]=='\n')
            break;
    }
    for(int b=0;i>0;--i,++b)
        x=x+change(s[i-1])*f(b);
    printf("%u",x);
    return 0;
}
