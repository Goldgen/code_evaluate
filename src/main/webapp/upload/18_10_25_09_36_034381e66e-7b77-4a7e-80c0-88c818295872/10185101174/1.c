#include <stdio.h>
#include <stdlib.h>

int main()
{

    double height=100.0;
    double sum=100.0;
    int count=2;
    for( ;count<=10;count++)
    {
    height=height/2.0;
    sum=sum+height*2;
    }
    printf("%.3f %.3f",sum,height/2);


}
