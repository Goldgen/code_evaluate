#include <stdio.h>
#include <math.h>


int main()
{
    int n,a;
    scanf("%d",&n);
    a=(n+1)/2;
    for(int i=0;i<a;i++){
        for (int j=0;j<a+i;j++){
            if(i!=a-1){
                if(j==a+i-1)printf("*\n");
                else if(j==a-i-1)printf("*");
                else printf(" ");
            }else printf("*");
        }
    }
    return 0;
}
