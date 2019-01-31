#include <stdio.h>
int main()
{
    int n=0,i=1,a=1;
    scanf("%d",&n);
    for (;i<=n/2+1;i++)
    {
        for(a=1;a<=n/2+i;a++)
        {
            if(i>=2&&i!=n/2+1)
            {
              if(a==n/2+2-i)
                printf("*");
              else if (a==n/2+i)
                printf("*\n");
              else printf(" ");
            }
            else if(i==1)
            {
                if(a==n/2+1)
                   printf("*\n");
                else printf(" ");

            }
            else printf("*");
        }
    }
    return 0;
}