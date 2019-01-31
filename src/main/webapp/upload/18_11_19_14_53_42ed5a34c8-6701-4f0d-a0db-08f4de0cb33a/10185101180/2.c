#include <stdio.h>
#include <stdlib.h>
int di(int n);
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",di(a));
    return 0;
}
int di(int n)
{
    int i;
	int j;
	j=n;
    if(j==0)
    {
        return 0;
    }
    if(j!=0)
    {
    i=j%10;
    j=j/10;
    return i+di(j);
    }
}