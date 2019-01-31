#include<stdio.h>

int main()
{
    int n;
    int i,j,k,copy_i;
    scanf("%d",&n);
    for (i = 1;i <= n - 1;i++){
        for (j = 1;j <= n-i;j++)
            printf(" ");
        for (k = 1;k <= 2*i-1;k++)
            printf("%c",65+i-1);
        printf("\n");
    }
    copy_i = i;
    for (j = 1;j <= 2*n - 1;j++)
        printf("%c",65+i-1);
    printf("\n");
    
    for (i = 1;i <= n - 1;i++){
        for (j = 1;j <= i;j++){
            printf(" ");
        }
        for (k = 1;k <= 2*n - 2*i - 1;k++){
            printf("%c",65+i+copy_i-1);
        }
        if (i != n - 1)
            printf("\n");
    }
    return 0;
}
