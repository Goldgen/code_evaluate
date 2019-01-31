#include <stdio.h>
#include <string.h>
void *ptr(char *p,int n)
{
    if(n>0)
    {
        *p = n%10+'0';
        p++;
        ptr(p,n/10);
    }
    return ;
}
int main()
{
    int m;
    scanf("%d",&m);
    char str[100]="0";
    char newstr[100]="0";
    ptr(str,m);
    int t = strlen(str);
    str[t]='\0';
    for(int x=0;x<t;x++)
    {
        newstr[x]=str[t-1-x];
    }
    newstr[t]='\0';
    printf("%s\n",newstr);

    return 0;
}