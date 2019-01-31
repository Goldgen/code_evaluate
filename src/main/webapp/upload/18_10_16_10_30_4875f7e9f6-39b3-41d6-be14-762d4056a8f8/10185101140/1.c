#include <stdio.h>

int main(void)
{
    int A;
    int B;
    scanf("%d %d",&A,&B);
    if(A > B)
    {
        printf("%d",A);
    }
    else
    {
        printf("%d",B);
    }
    return 0;
}