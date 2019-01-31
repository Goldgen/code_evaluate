#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    bool mark=true;
    scanf("%d+%d=%d",&a,&b,&c);
    if(a+b==c)
    {
        printf("0");
        mark=false;
    }
    int a1=a,b1=b,a2=a,b2=b;
    if(b%10==c%10&&mark)
    {
        int n=(c-b1)/a1;
        if(n*a1+b1==c)
		{
		    int sum=0;
			while(n!=1)
            {
                n/=10;
                sum++;
            }
            printf("%d",sum);
			mark=false;
		}
    }
    if(mark)
    {
		int n;
        n=(c-a2)/b2;
		int sum=0;
			while(n!=1)
            {
                n/=10;
                sum++;
            }
            printf("-%d",sum);
    }
    return 0;
}
