#include <stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    for(j = 2*n-2;j >= 0;j = j -2)
        {
            for(i = 1;i <= j;i++)
            {
                printf(" ");
            }
            printf("1");
            for(a=2;a<=n - j/2;a++)
            {
                printf("+%d",a);
            }
            printf("=");
            printf("%d",n - j/2);
            for(a=2;a<=n - j/2;a++)
            {
                printf("+%d",n+2 - j/2 - a -1);
            }
            if(j >0)
                printf("\n");
        }


}
