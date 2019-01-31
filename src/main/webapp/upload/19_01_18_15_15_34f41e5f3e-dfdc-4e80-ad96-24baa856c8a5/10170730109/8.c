#include <stdio.h>
#include <math.h>

int main(void) {
    int n,m,count,q,p;
    scanf("%d %d",&n,&m);
    q=n/10;
    for(count=1;q>0;count++){
        q=q/10;
    }
    m=m%count;
    p=count;
    int i=0,new=0,right=1;
    for(;p>0;p--){
        right=pow(10.0,p-1);
        i=n/right;
        n=n-i*right;
        right=pow(10.0,(p-1-m+2*count)%count);
        new+=i*right;
    }
    printf("%d %d",count,new);
    return 0;
}

