#include<stdio.h>
int main()
{
    long long day[2],month[2],year[2],sum;
    scanf("%lld %lld %lld %lld %lld %lld",&year[0],&month[0],&day[0],&year[1],&month[1],&day[1]);
    for(int i=0;i<2;++i)
    {
        for(int j=0;j<year[i];++j)
        {
            if((j%4==0&&j%100!=0)||(j%400)==0)
                day[i]+=366;
            else
                day[i]+=365;
        }
        for(int k=0;k<month[i];++k)
        {
            switch(k)
            {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                day[i]+=31;
                break;
            case 4: case 6: case 9: case 11:
                day[i]+=30;
                break;
            case 2:
                if((year[i]%4==0&&year[i]%100!=0)||year[i]%400==0)
                    day[i]+=29;
                else
                    day[i]+=28;
                break;
            default:
                break;
            }
        }
    }
    sum=day[1]-day[0];
    printf("采集时间为%lld天",sum);
    return 0;
}

