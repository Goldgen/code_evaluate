#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b,m,n=0;
    char list_1[1000],list_2[1000],list[1000];
    scanf("%s %s",list_1,list_2);
    a=strlen(list_1);
    b=strlen(list_2);
    if(a>=b)
    {
        for(m=0;m<b;m++)
        {
            list[n]=list_1[m];
            n++;
            list[n]=list_2[m];
            n++;
        }
        for(m=b;m<a;m++)
        {
            list[n]=list_1[m];
            n++;
        }
    }
    else
    {
        for(m=0;m<a;m++)
        {
            list[n]=list_1[m];
            n++;
            list[n]=list_2[m];
            n++;
        }
        for(m=a;m<b;m++)
        {
            list[n]=list_2[m];
            n++;
        }
    }
    for(m=0;m<a+b;m++)
    {
        printf("%c",list[m]);
    }
    return 0;
}