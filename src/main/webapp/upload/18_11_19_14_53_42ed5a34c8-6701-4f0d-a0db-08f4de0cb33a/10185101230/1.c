#include <stdio.h>
#include <stdlib.h>

int ave(double n){
float i,s;
int a=0;
while (scanf("%lf",&n)!=-1)
    {
        if(n==-1) return 0;
        else 
		{
			s+=n;
            a=a+1;
            i=(float)s/a;
            printf("%.2f\n",i);
		}
    }
}
int main()
{
    double m;
    ave(m);
    return 0;
}

