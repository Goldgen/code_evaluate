#include<stdio.h>
int main()
{
    double amounts[5]={0.0};
    int dollars[5]={0};
    int cents[5]={0};
    for(int i=0;i<5;i++)
    {
        scanf("%lf",&amounts[i]);
        dollars[i]=(int)amounts[i];
        cents[i]=(int)((amounts[i]+0.00000000000001)*100)%100;
        printf("$%i",dollars[i]);
        printf(".");
        printf("%2i",cents[i]);
        if(i<4) printf(" ");
    }
    return 0;
}
