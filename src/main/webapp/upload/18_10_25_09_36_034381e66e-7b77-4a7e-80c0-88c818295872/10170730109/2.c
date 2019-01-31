#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float sum = 0;
    int i=1;
    for(i=1;i<5;i++){
    scanf("%d ",&a);
    sum+=a;    
    }
    scanf("%d",&a);
    sum+=a;
    float avg;
    avg=sum/5;
    printf("%.1f",avg);
    return 0;
}