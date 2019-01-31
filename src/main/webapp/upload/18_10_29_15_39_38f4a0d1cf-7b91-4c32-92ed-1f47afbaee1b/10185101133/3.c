#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=1000;
    scanf("%d",&n);
    printf("%d",n);
    int i=2;
    while(i<=n/2){
        int j=2,count_1=0,count_2=0;
        for(;j<=i/2;j++){
            if(i%j==0)
                count_1++;
        }
        j=2;
        for(;j<=(n-i)/2;j++){
            if((n-i)%j==0)
                count_2++;
        }
        if(count_1==0 && count_2==0 )
            printf("=%d+%d",i,n-i);
        i++;

    }
    return 0;
}
