#include<stdio.h>
void mul(int i,int j)
{
    printf("%2d *%2d = %2d",j,i,i*j);
}
int main()
{
    int i=1,j=1,n;
    scanf("%d",&n);
    printf("%2d *%2d = %2d",j,i,i*j);
    for(i=2;i<=n;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            mul(i,j);
        }
    }
    return 0;
}
