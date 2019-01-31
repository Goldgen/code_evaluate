#include <stdio.h>
#include <stdlib.h>
double reverse(double a){
return 1/a;}
int main()
{
    int i=0;
    double s=0;
    double arr[4];
    for(i=0;i<=3;i++)
    {
        scanf("%lf",&arr[i]);
        arr[i]=reverse(arr[i]);
        printf("%.2lf ",arr[i]);
    }
    scanf("%lf",&arr[4]);
    arr[4]=reverse(arr[4]);
    printf("%.2lf",arr[4]);
    s=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    printf("\n%.6lf",s);

    return 0;
}
