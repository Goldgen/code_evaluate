#include <stdio.h>
#include <string.h>

int main()
{
    char s[100],interest[100];
    int i,first=-1,time=0;
    gets(s);
  	scanf(" %s",interest);
    for(i=0;i<=strlen(s)-strlen(interest);i++)
    {
        if(strncmp(s+i,interest,strlen(interest))==0)
        {
            if(first==-1)
                first=i;
            time++;
        }
    }
    printf("%s: %d time(s), first at %d\n",interest,time,first);
    return 0;
}
