#include<stdio.h>
#include<math.h>
int main()
{
    double arr[100];
    double arrs[100];
    int i=0;
    double sum=0;
    for(i;i<100;i++)
    {
        arr[i]=2*(i+1)*(2*(i+1)+1)*(2*(i+1)+2);
        arrs[i]=1.0/arr[i];
        if(i%2==0)
            sum+=arrs[i];
        else
            sum-=arrs[i];
    }
    printf("%.4lf",sum*4.0+3.0);
    return 0;
}
