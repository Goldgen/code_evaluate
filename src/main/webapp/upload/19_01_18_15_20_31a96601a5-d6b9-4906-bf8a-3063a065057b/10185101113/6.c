#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
    if (A>B)
        if(A>C)
            printf("%d",A);
        else
            printf("%d",C);
    else
        if (B>C)
        printf("%d",B);
        else
        printf("%d",C);
    return 0;
}
