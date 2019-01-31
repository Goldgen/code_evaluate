#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    double number=0.0;
    double total=0.0;
    for( ;count<5;count++)
    {
        scanf("%lf",&number);
        total+=number;
    }
    printf("%.1f",total/count);
}
