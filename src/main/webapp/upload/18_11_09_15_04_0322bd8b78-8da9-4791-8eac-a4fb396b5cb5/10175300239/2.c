#include <stdio.h>

int main()
{
    int n,i,j,count;
    count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-2*i;j++){
            printf(" ");
        }
        printf("1");
        for(j=2;j<=i;j++){
            printf("+%d",j);
        }
        printf("=");
        printf("%d",j-1);
        for(j=i-1;j>=1;j--){
            printf("+%d",j);
        }
        count++;
        if(count!=n)
            printf("\n");
    }
    return 0;
}