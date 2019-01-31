#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,k,a;
    scanf("%d",&n);
    if(n<=10&&n>=1)
    {
    	printf("{}");
        j=1;
        for(j=1;j<pow(2,n);j++)
        {
                printf("\n{");
                k=j;
                a=0;
                i=1;
                for(k=j;k!=0;k/=2)
                {
                    if(k%2==1)
					{
						if(i==1)
						printf("%d",a);
						else
						printf(",%d",a);
						i++;
					}
					a++;
                }
                printf("}");
        }
     }
    return 0;
}
