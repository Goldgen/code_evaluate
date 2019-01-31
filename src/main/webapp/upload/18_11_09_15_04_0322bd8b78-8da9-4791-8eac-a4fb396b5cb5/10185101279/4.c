#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>

int main()
{
    int n,i;
    long long int x=1;
    scanf("%d",&n);
    if(n==0)
        printf("1");
    
    else{
    for(i=1;i<=n;i++)
        x*=i;
    printf("%lld",x%20181111);
    }




    return 0;
}







