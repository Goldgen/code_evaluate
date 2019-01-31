#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    unsigned int n,m;unsigned int a;int k;
    scanf("%u %u",&n,&m);

    int count=0;
    a=n;
    while(n>0){
        n/=10;
        count++;
    }
    printf("%d ",count);
    m=m%count;
    k=1;
    for(int i=0;i<m;i++){
        k*=10;
    }
    if(count>1 && m!=0)
    printf("%d%d",a%k,a/k);
    else
        printf("%d",a);


    return 0;
}
