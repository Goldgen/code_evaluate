#include<stdio.h>
int min(int,int);
int max(int,int);

int main(void)
{
    char Num1[30000];
    char Num2[30000];
    int sum[30000];
    char a = 0;
    int co = 0; //各位进位
    int i = 1;
    int dig1 = 0;
    int dig2 = 0;
    int dig = 0;//加数的最大位数
    int addup = 0;//最高位进位

    a = getchar();
    Num1[0] = a;
    while(a!='\n')
    {
        a = getchar();
        Num1[i] = a;
        i++;
    }
    dig1 = i-1;
    i = 1;

    a = getchar();
    Num2[0] = a;
    while(a!='\n')
    {
        a = getchar();
        Num2[i] = a;
        i++;
    }
    dig2 = i-1;
    i = 1;
    dig = max(dig1,dig2);//输入数组

    if(dig==dig2)
    {
        for(i=dig2-1;i>=dig2-dig1;i--)
        {
            Num1[i] = Num1[i-dig2+dig1];
        }
        for(i=0;i<=dig2-dig1-1;i++)
            Num1[i] = '0';
    }
    else
    {
        for(i=dig1-1;i>=dig1-dig2;i--)
        {
            Num2[i] = Num2[i-dig1+dig2];
        }
        for(i=0;i<=dig1-dig2-1;i++)
            Num2[i] = '0';
    }   //若位数不同，将位数少的加数中的高位用0补足

    for(i=dig-1;i>=0;i--)
    {
        sum[i] = Num1[i]-'0' + Num2[i]-'0' +co;
        if(sum[i]>=10)
        {
            if(i==0)
                addup = 1;
            sum[i]-=10;
            co = 1;
        }
        else
            co = 0;
    }
    if(addup == 1)
        printf("1");
    for(i=0;i<=dig-1;i++)
        printf("%d",sum[i]);
}

int max(int a,int b)
{
    return a>b?a:b;
}
