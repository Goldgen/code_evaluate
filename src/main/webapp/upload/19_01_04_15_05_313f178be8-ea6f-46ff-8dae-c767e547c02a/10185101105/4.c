#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char *str;
    str=(char*)malloc(sizeof(char)*101);
    gets(str);
    int len=strlen(str),i,j,a,x=1,k;
    char ch[len];
    int num[len];
    ch[0]=str[0];
    num[0]=1;
    for(i=1;i<len;i++)
    {
        a=1;
        for(j=0;j<x;j++)
        {
            if(ch[j]==str[i])
            {
                a=0;
                num[j]++;
                break;
            }

        }
        if(a!=0&&str[i]!=' ')
        {
            ch[x]=str[i];
            num[x]=1;
            x++;
        }
    }
    for(k=0;k<x;k++)
    {
        
            printf("%c %d; ",ch[k],num[k]);
    }
    free(str);
    return 0;

}
