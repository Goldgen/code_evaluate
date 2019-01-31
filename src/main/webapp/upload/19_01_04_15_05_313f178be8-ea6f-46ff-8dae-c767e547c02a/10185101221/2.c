#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,b,c;
    long long it=0;
    char temp;
    scanf("%lld%c%lld%c%lld",&a,&temp,&b,&temp,&c);
    it=c-b;
    if(it%10==0){

        it=it/a;
        int i=0;
        for(i=0;it>1;i++)
            it/=10;
        printf("%d",i);
    }
    else{
        it=c-a;
        it=it/b;
        int i=0;
        for(i=0;it>1;i++)
            it/=10;
        printf("-%d",i);
    }
    return 0;
}
