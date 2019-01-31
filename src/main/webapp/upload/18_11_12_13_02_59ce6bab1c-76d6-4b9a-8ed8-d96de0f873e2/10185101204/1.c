#include <stdio.h>
void t(int);
int main()
{int m;
scanf("%d",&m);
printf(" 1 * 1 =  1");
t(m);
}
void t(int n)
{for(int i=2;i<=n;i++)
    {   printf("\n");
        for(int j=1;j<=i;j++)
        printf(" %d * %d =%3d",j,i,j*i);}
    }