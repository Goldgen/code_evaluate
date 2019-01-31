#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,q,num,num_a,num_b;//n为位数,num为输入数
    double p;
    scanf("%d %d",&num,&m);
    n=(int)log10(num)+1;
    if (m>n)
        m=m%n;
    p=pow(10,m);
    q=(int)p;
    num_a=num%q;
    num_b=num/q;
    if (n!=1)
    printf("%d %d%d",n,num_a,num_b);
    if (n==1)
    printf("%d %d",n,num_a);
}
