#include <stdio.h>
int main()
{
    int n,i=1;
    for(n=1;n<=100;n++)
    {
        if(n%3==0&&n%10==6)
        {
            if(i!=1)printf(" %d",n);
            else printf("%d",n);
            i++;
        }
    }
	return 0;
}