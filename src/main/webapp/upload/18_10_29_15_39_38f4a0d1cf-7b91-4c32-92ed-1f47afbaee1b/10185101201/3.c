#include <stdio.h>
int main()
{
	int a,b=3,n,j=0;
    scanf("%d",&a);
	printf("%d",a);
	for (;b<=a/2;b=b+2)
    {

            for (n=2,j=0;n<b;n++)
            {
                if (b%n==0)
                j++;

            }
            for (n=2;n<a-b;n++)
            {
                if ((a-b)%n==0)
                j++;

            }
            if (j==0)
            printf("=%d+%d",b,a-b);


    }

}