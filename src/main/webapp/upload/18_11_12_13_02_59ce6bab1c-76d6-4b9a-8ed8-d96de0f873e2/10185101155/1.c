#include <stdio.h>
void multiplication(int a,int b)
{
    if(a*b>=10)
        printf("%d * %d = %d",a,b,a*b);
    else
        printf("%d * %d =  %d",a,b,a*b);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=j;i++)
        {
			printf(" ");
            multiplication(i,j);
            if(i==j&&j!=n)
                printf("\n");
           
        }
    }
    return 0;
}