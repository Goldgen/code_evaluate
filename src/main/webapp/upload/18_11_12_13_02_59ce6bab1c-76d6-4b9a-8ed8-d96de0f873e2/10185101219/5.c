#include <stdio.h>
#include <stdlib.h>


double kindprice(char x)//这里定义了一个函数用来返回材料的价格
{
    if(x=='P')
        return 0.89;
    else if(x=='F')
        return 1.09;
    else if(x=='C')
        return 2.26;
    else if(x=='M')
        return 4.50;
    else if(x=='O')
        return 3.10;
}

int main()
{
    char a[5];//a用来存储材质名
    int A,B,C,D;
    int i=0;//i代表了有效数据的输入行数
    double price[5]={0.0,0.0,0.0,0.0,0.0};//用5个price数组方便输出的for循环
    for(;i<=5;++i){
        scanf ("%c",&a[i]);
        if (a[i]=='T')
            break;
        else{
        scanf(" %d %d %d %d\n",&A,&B,&C,&D);
        }
        price[i]=(double)A*B*C/12*D*kindprice(a[i]);
        if(a[i]=='P')
            printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",A,B,C,D,price[i]);
        else if(a[i]=='F')
             printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",A,B,C,D,price[i]);
        else if(a[i]=='C')
            printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",A,B,C,D,price[i]);
        else if(a[i]=='M')
            printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",A,B,C,D,price[i]);
        else if(a[i]=='O')
            printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",A,B,C,D,price[i]);
        }
    double sum=price[0]+price[1]+price[2]+price[3]+price[4];
    printf("Total cost: $%.2lf",sum);
    return 0;
}
