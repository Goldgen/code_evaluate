#include <stdio.h>
#include <stdlib.h>
void func(void)
{
    float n;
    float sum=0.0f;
    int i=0;
    double a[100];
    scanf("%f",&n);
    while(n!=-1)
    {
        sum=sum+n;
        i++;
        a[i]=sum;
        scanf("%f",&n);
    }
    for(int j=1;j<=i;j++)
    {
        printf("%.2f\n",(float)a[j]/j);
    }
}
int main()
{
    func();
    return 0;
}