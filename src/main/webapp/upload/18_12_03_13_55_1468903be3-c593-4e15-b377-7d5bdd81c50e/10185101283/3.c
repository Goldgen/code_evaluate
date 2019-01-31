#include<stdio.h>
int main()
{
    char s1[80],s2[80];
    int i=0,j=0;
    for(;;++i)
    {
        s1[i]=getchar();
        if(s1[i]==' ')
            break;
    }
    for(;;++j)
    {
        s2[j]=getchar();
        if(s2[j]==EOF)
            break;
    }
    for(int a=0;(a<i)||(a<j);++a)
    {
        if(a<i)
            printf("%c",s1[a]);
        if(a<j)
            printf("%c",s2[a]);
    }
    return 0;
}