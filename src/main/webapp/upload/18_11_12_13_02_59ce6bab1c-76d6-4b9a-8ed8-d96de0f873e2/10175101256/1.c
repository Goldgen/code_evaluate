#include <stdio.h>
#include <stdlib.h>
int multiply(int ,int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf(" %d * %d = ",j,i);
            if(multiply(i,j)<10)
            printf(" ");
            printf("%d",multiply(i,j));
            if(j!=i)
                printf("");
        }
        if(i!=n)
            printf("\n");
    }
}
int multiply(int i,int j){
    return i*j;
}
