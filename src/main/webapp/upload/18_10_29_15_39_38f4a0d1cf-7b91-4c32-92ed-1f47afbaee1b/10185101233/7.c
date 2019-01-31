#include<stdio.h>
int main()
{
    unsigned int a;
    scanf("%u",&a);
    int n=0;
    int i=1;
	while(i <= 32)
	{
		if(a%2==1)
        n++;
		a = (unsigned int)(a / 2);
		i++;
	}
    printf("%d",n);
    return 0;
}