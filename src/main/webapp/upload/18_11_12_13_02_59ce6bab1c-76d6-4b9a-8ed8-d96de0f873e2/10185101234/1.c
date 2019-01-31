#include<stdio.h>
#include<stdlib.h>

void fun(int num);
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
}
void fun(int num)
{
    int i,j,m;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
             m= i * j;
			 printf(" %d",j);
             printf(" *");
             printf(" %d",i);
             printf(" = ");
             if(m/10==0)
             printf(" %d",m);
             else
             printf("%d",m);
        }
        if(i!=num)
        printf("\n");
    }
}
