#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    int c, i;
    scanf("%s",str1);
    getchar();
    scanf("%s",str2);
    int a=strlen(str1);
    int b=strlen(str2);
    
	if(a>b)
		c=b;
    else
		c=a;
    for(i=0;i<c;++i)
        printf("%c%c",str1[i],str2[i]);
    if(a>b)
    {
        for(i=c;i<a;++i)
            printf("%c",str1[i]);
    }
    else
    {
        for(i=c;i<b;++i)
            printf("%c",str2[i]);
    }
}
