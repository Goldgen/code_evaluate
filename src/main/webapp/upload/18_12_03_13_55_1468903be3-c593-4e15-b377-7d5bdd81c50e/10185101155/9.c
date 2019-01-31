#include <stdio.h>
#include <string.h>
int seh(char *stra,char *strb)
{
    char *pos;
    pos = strstr(stra,strb);
    return (pos==NULL)?0:1+seh(pos+1,strb);
}
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    scanf("%s",str2);
    char *loc;
    loc = strstr(str1,str2);
    if(loc==NULL)
         printf("%s: %d time(s), first at -1\n",str2,seh(str1,str2));
    else
        printf("%s: %d time(s), first at %d\n",str2,seh(str1,str2),loc-str1);
    return 0;
}