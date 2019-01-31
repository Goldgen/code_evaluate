#include <stdio.h>
int main()
{
    int sum=0;
    int i=0,e=0;//用来循环
    int a=0,b=0;
    int co=1;//假装是bool型
    scanf("%d",&sum);
    printf("%d",sum);
    for (i=2;i*2<=sum;i++)
    {
        if(i==2||i==3)co=1;
        else
        for(e=2;e*e<=i;e++)
            if (i%e==0)co=0;
          //判断第一个数是否为质数

        if (co==0){
			co=1;continue;}//不是，进行下次循环
        else//是，判断剩下的数是否为质数
        {
                co=1;
                a=i;
                b=sum-a;
                for(e=2;e*e<=b;e++)
                if(b%e==0)co=0;
        }
        if(co!=0)//是质数，输出结果
          printf("=%d+%d",a,b);
          co=1;
    } 
    return 0;
}
