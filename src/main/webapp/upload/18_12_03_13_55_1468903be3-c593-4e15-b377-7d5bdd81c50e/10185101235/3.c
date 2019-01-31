#include<stdio.h>
#include<string.h>
int min(int,int);
int max(int,int);
int main(void)
{
    int i = 0;
    char str1[81] = "0";
    char str2[81] = "0";
    char str[162] = "0";

    scanf("%s %s",str1,str2);
    for(i=0;i<2*min(strlen(str1),strlen(str2));i+=2)
    {
        str[i] = str1[i/2];
        str[i+1] = str2[i/2];
    }
    for(;i<max(strlen(str1),strlen(str2))+min(strlen(str1),strlen(str2));i++)
    {
        if(strlen(str1)>=strlen(str2))
            str[i] = str1[i-min(strlen(str1),strlen(str2))];
        else
            str[i] = str2[i-min(strlen(str1),strlen(str2))];
    }
    printf("%s",str);
}

int min(int a, int b)
{
    return a>b?b:a;
}
int max(int a, int b)
{
    return a>b?a:b;
}
