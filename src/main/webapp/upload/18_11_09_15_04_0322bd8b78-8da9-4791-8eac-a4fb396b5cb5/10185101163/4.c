#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int d,s=1;
    int i,n;
    scanf("%d",&n);
    if(n==0) printf("1");
	else {for(i=1;i<=n;i++){
        s=s*i;
    }
    d=s%20181111;
    printf("%lld",d);}
    return 0;
}