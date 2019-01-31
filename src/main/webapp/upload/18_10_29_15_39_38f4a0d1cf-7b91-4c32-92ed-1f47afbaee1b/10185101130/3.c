#include<stdio.h>

int main(void)
{
	int i,j;
	int num;
	int m,n;
	scanf("%d",&num);
	printf("%d",num);
	for( m = 3;m <= (num+1)/2;m += 2)
	{
		n = num - m;
		for(i = 2;i < m;i++)
        {
           if(m%2==0||m%i==0)
             break;
           else if(i==m-1)
             { for(j = 2;j < n;j++)
                 {  if(n%2==0||n%j==0)
                      break;
                    else if(j==n-1)
                      printf("=%d+%d",m,n);
                 }

             }

	     }

    }
	return 0;
 }
