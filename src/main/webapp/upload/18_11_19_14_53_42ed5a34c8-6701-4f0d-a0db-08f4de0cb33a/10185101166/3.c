#include<stdio.h>

void k(int n)
{
    static int q[100] , t = 0;
    int m , p;
    while(n>0)
    {
        q[++t] = n;
        scanf("%d",&p);
        k(p);
		break;
    }
    if(n == 0|| n < 0)
    {
        
		for(m = t;m >= 1;m --)
            {
            	printf("%d",q[m]);
            	if(m>1)
            	printf(" ");
			}
    }
}

int main()

{
    int a;
    scanf("%d",&a);
    k(a);
}