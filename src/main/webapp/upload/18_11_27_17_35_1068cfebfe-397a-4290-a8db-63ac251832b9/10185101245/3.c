#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amounts[5];
    long dollars[5];
    long cents[5];
    for(int i=0;i<5;i++)
        scanf("%f",&amounts[i]);
    for(int i=0;i<5;i++)
 {
    dollars[i]=(long)(amounts[i]);
    cents[i]=(long)(100*(amounts[i]-dollars[i]));
    printf("$%d.%02d",dollars[i],cents[i]);
    if(i!=4)
        printf(" ");
}
    return 0;
}
