#include <stdio.h>
#include <stdlib.h>
/*用户从键盘输入5个数，请求其平均值*/
int main()
{
    float sum,a;
    float number[5];
    scanf("%f%f%f%f%f",&number[0],&number[1],&number[2],&number[3],&number[4]);
    for (int i =0;i<=4;i++)
        sum +=number[i];
    a = sum / 5;
    printf("%.1f",a);

    return 0;
}
