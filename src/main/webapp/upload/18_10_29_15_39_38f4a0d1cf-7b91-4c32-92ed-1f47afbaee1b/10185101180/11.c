#include <stdio.h>
int main()
{
    int a,b,c,x,y,n;
	n=0;
    for(a=1;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            for(c=0;c<10;c++)
            {
                x=a*100+b*10+c;
                y=a*a*a+b*b*b+c*c*c;
                if(x==y)
				{printf("%d",x);
				 n++;
				 if(n<4)
					 printf(" ");
				 
				}
            }
        }
    }
    return 0;
}
