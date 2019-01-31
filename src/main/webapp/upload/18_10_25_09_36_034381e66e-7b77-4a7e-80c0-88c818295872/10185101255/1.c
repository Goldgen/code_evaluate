
#include <stdio.h>

int main()
{
    double height=100.0,
    sum=height;
    int count=2;
    
    for (count=2; count<=10; count++)
    {
        height/=2;
        sum+=height*2;
    }
    printf("%.3lf %.3lf",sum,height/2);
    
    return 0;
    
    
}
