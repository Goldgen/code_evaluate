#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int j=1;
        int k=n-i;
        while(k){
            printf(" ");
            k--;
        }
        while(j<=2*i-1){
            printf("%c",'A'+i-1);
            if(j==2*i-1)
                printf("\n");
            j++;
        }
        i++;}
        i--;
    while(i!=1){
        int j=2*i-3;
        int k=n-i+1;
            while(k){
                printf(" ");
                k--;
            }
        while(j>0){
            printf("%c",'A'+2*n-i);
            if(j==1 && i!=2)
                printf("\n");
            j--;
        }
        i--;
    }
    return 0;
}
