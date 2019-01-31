#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int i;int j;int s;int t=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*(n-i);j++){
            printf(" ");
        }
        printf("1");
        for(s=(i-2);(i-s)<=i;s--){
            printf("+%d",i-s);
        }
        printf("=%d",i);
        for(s=1;(i-s)>=1;s++){
            printf("+%d",i-s);
        }
        if(t<n){
            printf("\n");
            t++;
        }
    }
    return 0;
}
