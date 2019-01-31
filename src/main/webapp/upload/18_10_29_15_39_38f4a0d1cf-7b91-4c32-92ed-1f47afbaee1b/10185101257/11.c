#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,sum,cnt=0;
    int ans[10];
    for(int i=100;i<1000;++i)
    {
        a=i%10;
        b=(i/10)%10;
        c=i/100;
        sum=pow(a,3)+pow(b,3)+pow(c,3);
        if(i==sum)
        {
            ans[cnt]=i;
            ++cnt;
        }
    }
    for(int j=0;j<cnt;++j)
    {
        if(j<cnt-1)
            printf("%d ",ans[j]);
        else
            printf("%d",ans[j]);
    }
    return 0;
}
