#include <stdio.h>

int main()
{
    int a,i,j,k,b=0;
    scanf("%d",&a);
    printf("%d",a);
    for(i=3;i<=a/2;i++)
    {
        b=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            	b=1;
            	break;
			}   
        }
        for(k=2;k<(a-i);k++)
        {
        	if((a-i)%k==0)
            {
            	b=1;
            	break;
			}
		}
        if(b==0)
            printf("=%d+%d",i,a-i);
    }
    return 0;
}
