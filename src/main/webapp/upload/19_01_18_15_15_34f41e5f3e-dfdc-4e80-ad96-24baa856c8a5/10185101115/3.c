#include <stdio.h>
#include <stdlib.h>
int main()
{int n;
scanf("%d",&n);
printf("%d",n);
    for(int a=1;a<=n/2;a++)
    {
        for(int i=2;i<a;i++)
        {
            if((a%i)==0)
            {
             break;
            }
            else if(i==a-1)
            {
                for(int j=2;j<n-a;j++)
                {
                    if((n-a)%j==0)
                    {
                        break;
                    }
                    else if(j==n-a-1)
                    {
                        printf("=");
                        printf("%d",a);
                        printf("+");
                        printf("%d",n-a);
                     }
                }
                }

            }
        }

return 0;
}