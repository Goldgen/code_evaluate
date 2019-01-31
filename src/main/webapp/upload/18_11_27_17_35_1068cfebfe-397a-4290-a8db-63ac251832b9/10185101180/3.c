#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float amounts[5];
    long dollars[5],cents[5];
    scanf("%f %f %f %f %f",&amounts[0],&amounts[1],&amounts[2],&amounts[3],&amounts[4]);
    for(i=0;i<5;i++)
    {
        dollars[i]=(long)amounts[i];
    }
    for(j=0;j<5;j++)
    {
        cents[j]=(long)((amounts[j]-dollars[j])*100.0);
    }
    printf("$%ld.%ld $%ld.%ld $%ld.%ld $%ld.%ld $%ld.%ld",dollars[0],cents[0],dollars[1],cents[1],dollars[2],cents[2],dollars[3],cents[3],dollars[4],cents[4]);
    return 0;
}
