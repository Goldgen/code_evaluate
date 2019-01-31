#include <stdio.h>
#include <stdlib.h>

/*33.用户从键盘输入5个数，请求其平均值；*/

int main()
{
    float num[6];
    float avg=0;
    for(int i=0; i<5; i++){
        scanf("%f", &num[i]);
        avg +=num[i]/5;
    }
    printf("%.1f", avg);
    return 0;
}
