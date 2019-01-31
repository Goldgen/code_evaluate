#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5];
    long dollars[5],cents[5],mid;
    int i;
    scanf("%f %f %f %f %f",&amounts[0],&amounts[1],&amounts[2],&amounts[3],&amounts[4]);
    for(i=0;i<5;i++)
    {
        mid=amounts[i]*100;
        dollars[i]=mid/100;
        cents[i]=mid%100;
    }
    printf("$%ld.%ld $%ld.%ld $%ld.%ld $%ld.%ld $%ld.%ld",dollars[0],cents[0],dollars[1],cents[1],dollars[2],cents[2],dollars[3],cents[3],dollars[4],cents[4]);
    return 0;
}
