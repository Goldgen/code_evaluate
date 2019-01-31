#include <stdio.h>

int main()
{
    int num,i,j,k,mark=0;
    scanf("%d",&num);
    printf("%d",num);
    for(i=3;i<=num/2;i++)
    {
        mark=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
            	mark++;
            	continue;
			}   
        }
        for(k=2;k<(num-i);k++)
        {
        	if((num-i)%k==0)
            {
            	mark++;
            	continue;
			}
		}
        if(mark==0)
            printf("=%d+%d",i,num-i);
    }
    return 0;
}
