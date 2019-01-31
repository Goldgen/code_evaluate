#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,count;
	count=0;
    for(i=100;i<1000;++i)
    {
        a=i/100;
        b=i%10;
        c=(i/10)%10;
        d=a*a*a+b*b*b+c*c*c;
        if(i==d)
        {
            count+=1;
			if(count==1)
			{
				printf("%d",i);
			}
			else
				printf(" %d",i);
        }
    }
    return 0;
}
