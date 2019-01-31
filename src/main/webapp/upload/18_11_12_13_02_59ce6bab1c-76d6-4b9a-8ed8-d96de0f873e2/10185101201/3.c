#include<stdio.h>
#include<math.h>
void g(int x)
{
    int i,j,k;
    i=sqrt(x);
    for(j=2,k=0;j<=i;j++)
    {
        if(x%j==0)
            k++;
    }
    if(k==0)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
}
int main()
{
    int a;
    scanf("%d",&a);
    g(a);
}