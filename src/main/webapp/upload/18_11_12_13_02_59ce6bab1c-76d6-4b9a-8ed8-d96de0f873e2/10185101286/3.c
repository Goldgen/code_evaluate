#include<stdio.h>
int main()
{
    int i,n,m,k;
    scanf("%d",&n);
    if(n==1)
        printf("It's not a prime number.");
	else if(n==2)
		printf("It is a prime number.");
    else
    {
        k=0;
        for(i=2;i<n;++i)
        {
            m=n%i;
            if(m==0)
            {
                k+=1;
            }
        }
        if(k==0)
        {
            printf("It is a prime number.");
        }
        else
            printf("It's not a prime number.");
    }
    return 0;
}
