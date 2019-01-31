#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10]={1},n;
    scanf("%d",&n);
    a[1][0]=1;
    a[1][1]=1;
    for(int i=2;i<n;i++){
        for(int j=0;j<=i;j++){
            if(0<j<i)
                a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",a[i][j]);
            if(j<i)
                printf(" ");
        }
        if(i<n-1)
            printf("\n");
    }
}
