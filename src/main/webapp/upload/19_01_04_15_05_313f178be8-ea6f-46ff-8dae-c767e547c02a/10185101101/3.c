#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int count[100]={0};
    char cha[100]={0};
    int i,j,k;
    k=0;
    for(i=0;i<strlen(str);++i)
    {
        for(j=0;j<i;++j)
        {
            if(str[i]==cha[j])
                {
                 count[j]++;
                 break;
                }
            else{k++;continue;}
        }
        if(k==strlen(str))
        {
            cha[i]=str[i];
            count[i]++;
        }

    }
    for(i=0;i<strlen(str);++i)
    {
        printf("%c %d; ",cha[i],count[i]);
    }
    return 0;
}