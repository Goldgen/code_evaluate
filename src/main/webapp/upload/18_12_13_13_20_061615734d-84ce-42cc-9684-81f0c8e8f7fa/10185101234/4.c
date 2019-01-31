#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *ti(char b[55])
{
    int i=0;
    char *a,c[55];
    a=b;
    while(*(a+i)!='\0')
    {
       if(*(a+i)=='Z')
         c[i]='A';
        else
         c[i]=*(a+i)-'A'+'B';
         i++;
    }
    c[i]='\0';
    return c;
}
int main()
{
    int n,i=0;
    scanf("%d",&n);
    char x[n][55],y[n][55];
    for(i=0;i<n;i++)
    {
        scanf("%s",x[i]);
    }
    for(i=0;i<n;i++)
    {
        strcpy(y[i],ti(x[i]));
    }
    for(i=0;i<n;i++)
    {
        printf("case #%d: %s",i,y[i]);
		if (i<n-1) printf("\n");
	}
    return 0;
}