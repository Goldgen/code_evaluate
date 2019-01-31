#include <stdio.h>
#include <math.h>

int Factorial(int n){
    return (n == 0)?1:n*Factorial(n - 1);
}

int zuhe(int n,int r){
    return Factorial(n)/(Factorial(r)*Factorial(n - r));
}

int main(void)
{
    int n;
    int i,j;
    scanf("%d",&n);
    for (i = 0;i < n;i++){
        for (j = 0;j <= i;j++){
            if (j != 0)
                printf(" ");
            printf("%d",zuhe(i,j));
        }
        if (i != n - 1)
            printf("\n");
    }
    return 0;
}
