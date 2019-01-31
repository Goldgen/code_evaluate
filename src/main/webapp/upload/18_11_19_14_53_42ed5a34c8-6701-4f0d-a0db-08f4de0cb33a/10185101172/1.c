#include <stdio.h>

int main()
{
    int count=0;
    float result,n,sum=0;
    scanf("%f",&n);
    do
    {
        sum+=n;
        count++;
        result=sum/count;

        printf("%.2f\n",result);
        scanf("%f",&n);
    }while(n!=-1.00f);

}
