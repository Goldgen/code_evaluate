#include <stdio.h>

void print_Photoframe(int n){
    int i,j;
    for (i = 0;i < n;i++){
        for (j = 0;j < n;j++){
            if (i != 0 && i != n-1)
                (j == 0 || j == n - 1)?printf("*"):printf(" ");
            else
                printf("*");
        }
        if (i != n - 1)
            printf("\n");
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    print_Photoframe(n);
    return 0;
}
