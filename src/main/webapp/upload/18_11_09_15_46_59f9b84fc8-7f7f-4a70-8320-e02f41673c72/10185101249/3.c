#include <stdio.h>
int main()
{
    int a,b,n;
    char c;
    c='A';
    scanf("%d",&n);
    if(n>=2&&n<=13)
    {
        for(b=1;b<=n-1;b++)
            printf(" ");
            printf("%c",c);
	for(a=2;a<=n;a++)
    {
        c++;
    	printf("\n");
    	for(b=1;b<=n-a;b++)
            printf(" ");
        for(b=1;b<=2*a-1;b++)
            printf("%c",c);
    }
    for(a=n;a>1;a--)
    {
        c++;
    	printf("\n");
    	for(b=1;b<=n-a+1;b++)
            printf(" ");
        for(b=2*a-3;b>=1;b--)
            printf("%c",c);
    }
    }
return 0;
}
