#include <stdio.h>

void MulExp(int i);

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for(i = 1; i <= n; i++)
    {
        MulExp(i);
        if(i < n)
            printf("\n");
    }
    return 0;
}


void MulExp(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        printf(" %d * %d = ", i, n);
        if(i * n < 10)
            printf(" ");
        printf("%d", i * n);
    }
}
