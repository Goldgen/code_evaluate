#include <stdio.h>
#include <stdlib.h>

int main()
{  double amounts[5];
    long dollars[5],cents[5];
    int i;
    for(i=0;i<5;i++){
    scanf("%lf",&amounts[i]);
    dollars[i]=(long)amounts[i]%100;
    cents[i]=(long)(100.0*(amounts[i]))%100;
    if(i==0)
     printf("$%d.%.02d",dollars[i],cents[i]);
    else
     printf(" $%d.%.02d",dollars[i],cents[i]);
    }
    return 0;
}
