#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Arr[5],Brr[5],sum=0.0;
    int i;
    scanf("%lf %lf %lf %lf %lf",&Arr[0],&Arr[1],&Arr[2],&Arr[3],&Arr[4]);
    for(i=0;i<5;i++){
    Brr[i]=1.0/Arr[i];
    sum=sum+Brr[i];
    printf("%.2f",Brr[i]);
    if(i<4) printf(" ");
    }
    printf("\n%.6f",sum);
    return 0;
}
