#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number[5]={0};
    int sum=0;
    int i=0;
    while(i<=4){
        scanf("%d",&number[i]);
        sum+=number[i];
        i++;
    }
    printf("%.1f",sum/5.0);
    return 0;
}
