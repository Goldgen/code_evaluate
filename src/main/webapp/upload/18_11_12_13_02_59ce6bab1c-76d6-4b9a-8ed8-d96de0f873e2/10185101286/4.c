#include<stdio.h>
#include<math.h>
unsigned int shu(long int a);
int main()
{
    long int a;
    scanf("%ld",&a);
    printf("%u",shu(a));
    return 0;
}
unsigned int shu(long int a)
{
    int i,k;
    unsigned int amout=0;
    int j=0;
    for(i=1;i<1000;++i)
    {
        k=pow(8,j);
        amout+=(a%10)*k;
        a=a/10;
        j+=1;
        if(a==0)
            break;
    }
    return amout;
}
