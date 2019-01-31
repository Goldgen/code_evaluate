#include <stdio.h>
int main()
{
    int e,n,a,b,c,d,m,i,f,g;
    for (e=100;e<=400;e++)
    {
        n=e;
        c=n%10;n=n/10;
        b=n%10;n=n/10;
        a=n;
        if(a*a*a+b*b*b+c*c*c==e)
	    printf("%d ",e);
    }
    for(d=401;d<=999;d++)
    {
      m=d;
      i=m%10;m=m/10;
      f=m%10;m=m/10;
      g=m;
      if(i*i*i+f*f*f+g*g*g==d)
        printf("%d",d);
    }
	return 0;
}