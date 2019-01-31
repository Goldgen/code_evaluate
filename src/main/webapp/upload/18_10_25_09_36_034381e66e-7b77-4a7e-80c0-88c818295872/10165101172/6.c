#include <stdio.h>

void print_right_angle_triangle(int n){
    int i,j;
    for (i = 0;i < n - 1;i++){
        for (j = 0;j <= i;j++){
            (j == 0 || j == i)?printf("*"):printf(" ");
            
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
    print_right_angle_triangle(n);
    return 0;
}