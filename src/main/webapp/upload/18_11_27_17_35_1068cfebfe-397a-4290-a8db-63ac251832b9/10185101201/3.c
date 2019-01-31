#include<stdio.h>
main()
{
    int n;
    float amounts[5];
    long dollars[5],cents[5];
    scanf("%f %f %f %f %f",&amounts[0],&amounts[1],&amounts[2],&amounts[3],&amounts[4]);
    for(n=0;n<=4;n++)
        dollars[n]=(int)amounts[n];
    for(n=0;n<=4;n++)
    {
        cents[n]=(amounts[n]-(int)amounts[n])*100;

    }

        printf("$%d.%d",dollars[0],cents[0]);
    for(n=1;n<=4;n++)
    {
        printf(" $%d",dollars[n]);
        if(cents[n]<=9)
            printf(".0%d",cents[n]);
        else
            printf(".%d",cents[n]);
    }
}
