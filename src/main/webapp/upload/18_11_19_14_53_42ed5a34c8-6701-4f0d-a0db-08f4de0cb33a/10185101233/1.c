#include<stdio.h>
float RunInavg(float x,float y,float z)//x为新输入，y为以前所有输入之和,z为总输入次数
{
    return (x+y)/z;
}
int main()
{
    float result;
    float sum=0;
    float i=1;
    float a;//a为新输入，sum为以前所有输入之和
    scanf("%f",&a);
    while(a!=-1)
    {
        result=RunInavg(a,sum,i);
        sum+=a;
        printf("%.2f",result);
        i++;
        printf("\n");
        getchar();
        scanf("%f",&a);
    }
    if(a==-1)
    return 0;
}
