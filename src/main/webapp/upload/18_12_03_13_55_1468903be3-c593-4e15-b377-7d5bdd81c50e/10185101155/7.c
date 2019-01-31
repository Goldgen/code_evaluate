#include <stdio.h>
#include <string.h>
int main()
{
    char str[80][81];
    int m=0;
    while(scanf("%s",str[m])!=EOF)
    {
        m++;
    }
    char strmax[81];
    strcpy(strmax,str[0]);
    for(int x=1;x<m;x++)
    {
        if(strlen(strmax)<strlen(str[x]))
            strcpy(strmax,str[x]);
    }
    printf("%s\n",strmax);
    return 0;
}