#include<stdio.h>

int main(void)
{
    int a=1,b=0,c=0;
    int p=1,q=0,r=0;
    int i=0;
    for(a = 1;a <= 9;++a)
    {
        for(b = 0;b <= 9;++b)
        {
            for(c = 0;c <= 9;++c)
            {
                p=a*a*a;
                q=b*b*b;
                r=c*c*c;
                if((100*a+10*b+c)==(p+q+r))
                {
                    i+=1;
					if(i==1)
                    	printf("%d",p+q+r);
                    else
					    printf(" %d",p+q+r);
                }    
            }
        }
    }
    return 0;
}

