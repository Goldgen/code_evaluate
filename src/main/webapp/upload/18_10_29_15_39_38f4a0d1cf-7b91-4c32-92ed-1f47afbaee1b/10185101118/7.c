#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long n;
    int c,x=0;
    float b;
    scanf("%llu",&n);
    for(int i=0;;i++)
    {
        b=n%(int)pow(2,i+1);
        if(b!=0)
        {
            x++;
            c=pow(2,i);
            n-=c;
        }
        if(n<=0)break;
    }
    printf("%d",x);
    return 0;
}