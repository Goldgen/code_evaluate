#include<stdio.h>
#include<string.h>
int min(int x, int y)
{
    return x>y?y:x;
}
int max(int x, int y)
{
    return x>y?x:y;
}
int main(void)
{
    int i = 0;
    char str1[81]; 
    char str2[81];
    char str[162];
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


