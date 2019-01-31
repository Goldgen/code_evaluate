#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* i2a(char* p,int n)
{
    if(n/10==0)
	{*p=n%10+'0';
        *(p+1)='\0';
        return p;
	}
   else
    {
       i2a(p,n/10);
        char ch[2]={n%10+'0','\0'};
        strcat(p,ch);
    }

}
int main()
{
    int x;
    char y[100];
    scanf("%d",&x);
    printf("%s",i2a(y,x));
    return 0;
}
