#include <stdio.h>

int main()
{
    double number,sum=0.0;
    int i=0;
    for (i=1; i<=5; i++)
    {
        scanf("%lf",&number);
        sum+=number;
    }
    printf("%.1lf",sum/5);
   
    return 0;
    
    
}
