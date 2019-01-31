#include<stdio.h>
int max(int a,int b)
{
    return a>b?a:b;
}

int main()
{
    char data1[30000];
    char data2[30000];
    int sum[30000];
    char a = 0;
    int co = 0,i = 1,dig1 = 0,dig2 = 0,dig = 0,addup = 0;
    a = getchar();
    data1[0] = a;
    while(a!='\n')
    {
        a = getchar();
        data1[i] = a;
        i++;
    }
    dig1 = i-1;
    i = 1;

    a = getchar();
    data2[0] = a;
    while(a!='\n')
    {
        a = getchar();
        data2[i] = a;
        i++;
    }
    dig2 = i-1;
    i = 1;
    dig = max(dig1,dig2);

    if(dig==dig2)
    {
        for(i=dig2-1;i>=dig2-dig1;i--)
        {
            data1[i] = data1[i-dig2+dig1];
        }
        for(i=0;i<=dig2-dig1-1;i++)
            data1[i] = '0';
    }
    else
    {
        for(i=dig1-1;i>=dig1-dig2;i--)
        {
            data2[i] = data2[i-dig1+dig2];
        }
        for(i=0;i<=dig1-dig2-1;i++)
            data2[i] = '0';
    }

    for(i=dig-1;i>=0;i--)
    {
        sum[i] =  data1[i]-'0' +  data2[i]-'0' +co;
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

