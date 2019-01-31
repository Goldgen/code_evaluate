#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i;
    int s=0;
	double m;
    scanf("%d",&n);
	m=(double)n;
    for(i=2;i<=sqrt(m);i++)
    {
        s=n%i;
        if(s==0)
            {
                printf("It's not a prime number.");
                return 0;
            }
    }
    printf("It is a prime number.");
    return 0;
}
