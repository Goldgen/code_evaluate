#include <stdio.h>

int main()
{
    int n,i,j,num=1;//i为行数，j为列数
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for (j=0;j<=i;j++)
        {
            if ((i==0)||(j==0))
                printf("1");
            else
                {num=num*(i-j+1)/j;
                printf(" %d",num);}

        }
        if (i<n-1) printf("\n");
    }
}