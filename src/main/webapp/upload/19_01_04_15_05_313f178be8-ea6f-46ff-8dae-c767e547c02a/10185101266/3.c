#include <stdio.h>
#include <string.h>
int main()
{
    char a1[1000],a2[1000];
	int n,s;

    while(scanf("%s",a1)&&(strcmp(a1,"#")!=0))
    {
        char*m;
		n=0;
		scanf("%s",a2);
        s=strlen(a2);
		
        while((m=strstr(a1,a2))!=NULL)
        {
            n++;
            strcpy(a1,m+s);
        }
        
		printf("%d\n",n);
    }
}

