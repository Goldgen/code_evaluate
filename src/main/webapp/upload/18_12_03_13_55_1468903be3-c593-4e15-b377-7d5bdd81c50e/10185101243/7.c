#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int Max=-1;
    char ans[100],a[100];
    while(scanf("%s",a)!=EOF)
    {
        int x=strlen(a);
        if (x>Max) Max=x,strcpy(ans,a);
    }
    for (int i=0;i<strlen(ans);i++)
        putchar(ans[i]);
    puts("");
	return 0;
}
