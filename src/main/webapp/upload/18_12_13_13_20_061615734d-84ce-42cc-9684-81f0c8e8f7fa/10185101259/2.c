#include <stdio.h>
#include <stdlib.h>
void strmcpy(char *s1,char *s2,int m)
{   int i,len;
    len=strlen(s1);
    for(i=m;i<len;i++)
    {
        s2[i-m]=s1[i];
    }
    puts(s2);

}

int main()
{
    char string1[81]={'\0'},string2[81]={'\0'};
    int m;
    gets(string1);
    scanf("%d",&m);

    strmcpy(string1,string2,m);
    return 0;
}
