#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        if(i!=n){
        for(int j=0;j<i;j++){
            if(j==0||j==i-1)printf("*");
            else printf(" ");
        }printf("\n");
        }
        else {
            for(int j=0;j<i;j++)
                printf("*");

        }
    }
    return 0;
}
