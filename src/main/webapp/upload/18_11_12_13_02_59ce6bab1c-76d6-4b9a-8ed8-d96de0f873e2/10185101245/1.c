#include <stdio.h>
#include <stdlib.h>


    int prit_mul_table(int k)
    {
        int i,j;
        for(i=1;i<=k;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf(" %d * %d = %2d",j,i,j*i);
           
            }
            if(i!=k)
			printf("\n");
        }
    }

    int main()
{
    int n;
    scanf("%d",&n);
    prit_mul_table(n);

return 0;

}