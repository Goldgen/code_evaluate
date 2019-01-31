#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long long int n;
	unsigned int m;
    scanf("%llu %u",&n,&m);
    unsigned long long int x=n;
    unsigned int count=1;
    while(x/10>0){
        ++count;
        x/=10;
        }

    unsigned int i=1;
    unsigned int a,b;
    unsigned int j; unsigned long long int num=1;
    while(i<=(m%count)){
        a=n/10;
        b=n%10;
        if(b==0){
            n/=10;
            i++;
        }
        else{
            for(j=1;j<count;j++){
                num*=10;
            }
            n=a+b*num;
            num=1;
            i++;
        }
    }

    printf("%u %llu",count,n);
    return 0;
}
