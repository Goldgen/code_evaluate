#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void change(int i){
    int j=i;
    while(j<=i){
        int k=1;
        while(k<=j){
            printf(" %d * %d =",k,j);
            if(k*j>=10)
                printf(" %d",k*j);
            else
                printf("  %d",k*j);
            k++;
        }
        j++;
    }
    return;
}


int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        change(i);
        printf("\n");
        i++;
    }
    return 0;
}
