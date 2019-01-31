#include <stdio.h>

void print_isosceles_triangle(int n){
    int i,j;
    for (i = 0;i < n/2;i++){
        for (j = 0;j < n - 1;j++){
            (j == n/2 - i || j == n/2 + i)?printf("*"):printf(" ");
            if (j == n/2 + i)
                break;
        }
        printf("\n");
    }
    for (i = 0;i < n;i++)
        printf("*");
}

int main(void)
{
    int n;
    scanf("%d",&n);
    print_isosceles_triangle(n);
    return 0;
}