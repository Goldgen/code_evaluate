#include <stdio.h>
#include <math.h>

int main(void)

{
    int prime[1000] = {0};
    int num = 0;
    int m = 3;  //存放3-1000自然数
    int i = 0;  //数组编号
    int t = 2;  //除数
    int k = 0;  //存放m开方的值，以计算m是否质数
    int a = 0,b = 0;    //两个加数
    scanf("%d",&num);
    for(;m<=1000;m++)
    {
        k = (int)sqrt((double)m);
        for(;t<=k;t++)
        {
            if(m%t==0)
                break;
        }
        if(t==k+1)
        {
            prime[i] = m;
            i++;
        }
        t = 2;
    }               //将1-1000中质数放到数组中

    printf("%d",num);
    for(i=0;prime[i]<=num/2;i++)
    {
        a = prime[i];
        b = num - prime[i];
        for(k=0;prime[k]<=num;k++)
        {
            if(b == prime[k])
            {
                printf("=%d+%d",a,b);
                break;
            }
        }
    }
}
