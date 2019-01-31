#include <stdio.h>
int main()
{
    int n=0,i=1,a=1;
    scanf("%d",&n);
    for (;i<=n;i++)
    {
        for(a=1;a<=i;a++)
        {
            if(i>2&&i!=n)
            {
              if(1==a)
                printf("*");
              else if(a==i)
                printf("*\n");
              else printf(" ");
            }
            else if(a<=2)
            {
                if(a==i)
                   printf("*\n");
                else printf("*");
            }
            else printf("*");
        }
    }
    return 0;
}
