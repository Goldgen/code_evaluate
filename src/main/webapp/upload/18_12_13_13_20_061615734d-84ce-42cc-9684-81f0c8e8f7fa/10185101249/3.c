#include <stdio.h>
#include <string.h>
void* i2a(char* p,int n)
{
    if(n>0)
    {
    	*p=n%10+48;
    	p++;
    	i2a(p,n/10);
	}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    char p[30]="0";
    char t[30]="0";
    i2a(p,n);
    for(i=0;i<strlen(p);i++)
    {
        t[i]=p[strlen(p)-i-1];
    }
    t[strlen(p)]='\0';
    puts(t);
    return 0;
}
