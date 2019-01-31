#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int count[100]={0};
    char cha[100]={0};
    int i,j,k,p;
    k=strlen(str);
    p=0;
    for(i=0;i<strlen(str);++i)
        {cha[i]=str[i];
            count[i]++;}
    for(i=0;i<strlen(str);++i)
    {
        for(j=0;j<strlen(str)-i;++j)
        {
            if(cha[i]==cha[j])
            {count[i]++;
                k--;}
            else
            {
                p++;continue;
            }

        }

    }
    for(i=0;i<k;++i)
        printf("%c %d; ",cha[i],count[i]);


    return 0;
}