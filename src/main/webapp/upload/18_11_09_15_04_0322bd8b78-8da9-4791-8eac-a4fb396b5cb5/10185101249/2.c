#include <stdio.h>
#include <stdio.h>
int main()
{
    int a,b,n,s;
    s=1;
    scanf("%d",&n);
    if(0<=n&&n<=10)
    {
        for(b=1;b<=2*n-2;b++)
            printf(" ");
            printf("1=1");
	for(a=2;a<=n;a++)
    {
    	printf("\n");
    	for(b=1;b<=2*n-2*a;b++)
            printf(" ");
        printf("1");
        for(b=2;b<=a;b++)
            printf("+%d",b);
        printf("=%d",a);
        for(b=a-1;b>0;b--)
            printf("+%d",b);
    }
	}
return 0;
}
