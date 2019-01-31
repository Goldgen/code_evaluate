#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i1=0,i2=0;
    char s1[80],s2[80];
    while((s1[i1]=getchar())!=' ')
    {
        i1++;
    }
    while((s2[i2]=getchar())!=EOF)
    {
        i2++;
    }
    i1--;
    i2--;

    if(i1==i2){
        for(int i=0;i<=i2;++i)
            printf("%c%c",s1[i],s2[i]);
    }
    if(i1>i2){
        for(int i=0;i<=i2;++i)
            printf("%c%c",s1[i],s2[i]);
        for(int i=(i2+1);i<=i1;++i)
            if(s1[i]!='\n')
            printf("%c",s1[i]);
    }
    if(i1<i2){
        for(int i=0;i<=i1;++i)
            printf("%c%c",s1[i],s2[i]);
        for(int i=i1+1;i<=i2;++i)
            if(s2[i]!='\n')
            printf("%c",s2[i]);
    }
    return 0;
}
