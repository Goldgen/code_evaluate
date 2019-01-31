#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int result(int,int);
int main()
{
    int n;
    int i=2;
    int j=1;
    scanf("%d",&n);
    printf(" 1 * 1 =  1");
    while(i<=n)
    {
        int j=1;
        printf("\n ");
        for(;j<i;j++)
        {
            int c=result(i,j);
            printf("%d * %d =%3d ",j,i,c);
        }
        int c=result(i,j);
        printf("%d * %d =%3d",i,i,c);
        i++;
    }

    return 0;
}
int result(int i,int j)
    {
        int result = j*i;
        return result;
    }
