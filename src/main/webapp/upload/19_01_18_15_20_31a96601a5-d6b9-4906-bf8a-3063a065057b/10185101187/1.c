#include <stdio.h>

int main()
{
    int numA = 0;
    int numB = 0;

    scanf("%d %d", &numA, &numB);

    if(numA >= numB)
        printf("%d", numA);
    else
        printf("%d", numB);

    return 0;
}
