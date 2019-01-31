#include <stdio.h>
int main(void)
{
    int a,n=0,t;
    scanf("%d",&a);
    while(a!=0)
    {
        t=a%2;
		if(t==1)
            n++;
        a/=2;
    }
    printf("%d",n);
    return 0;
}
