#include <stdio.h>

int change(long long a);
int main()
{
    long long n;
    scanf("%lld",&n);
    printf("%d",change(n));
    return 0;
}
int change(long long a){
    int result,num,count,i;
    result=0;
    count=0;
    while(a>0){
        num=a%10;//个位
        for(i=0;i<count;i++)
            num*=8;
        result+=num;
        a/=10;
        count++;
    }
    return result;
}
