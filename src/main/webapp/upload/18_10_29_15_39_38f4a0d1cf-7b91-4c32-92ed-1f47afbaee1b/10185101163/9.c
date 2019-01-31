#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,i,j,o,p,d,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            a=1,b=1,c=1;
            for(o=1;o<i;o++) a=a*o;
            for(p=1;p<j;p++) b=b*p;
            for(q=1;q<=(i-j);q++) c=c*q;
            d=a/(b*c);
            printf("%d",d);
            if(j<i) printf(" ");
        }
        if(i<n) printf("\n");
    }
    return 0;
}
