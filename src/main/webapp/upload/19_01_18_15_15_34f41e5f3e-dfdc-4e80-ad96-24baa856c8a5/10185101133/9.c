#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int num[10][10]={0};
    int j=0;
    while(j<n){
        num[j][0]=1;
        j++;
    }
    num[1][1]=1;
    i=2;
    while(i<n){
        j=1;
        while(j<=i){
            num[i][j]=num[i-1][j-1]+num[i-1][j];
            j++;
        }
        i++;
    }
    i=0;
    while(i<n){
        j=0;
        while(j<=i){
            printf("%d",num[i][j]);
            if(i!=j)
                printf(" ");
            j++;
        }
        if(i!=n-1)
            printf("\n");
        i++;
    }
    return 0;
}
