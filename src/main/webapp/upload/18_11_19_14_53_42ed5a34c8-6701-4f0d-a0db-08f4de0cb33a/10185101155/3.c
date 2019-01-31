#include <stdio.h>
void wofule()
{
    int n = 0;
	static int a = 0;
    scanf("%d",&n);
    if(n>0)
    {
        wofule();
		if(a>0)
			printf(" ");
        printf("%d",n);
		a++;
    }
    else
        return ;
}
int main()
{
    wofule();
    return 0;
}
