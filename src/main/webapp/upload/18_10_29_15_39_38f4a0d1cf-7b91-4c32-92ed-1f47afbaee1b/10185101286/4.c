#include<stdio.h>
int main()
{
    double a,B,L;
    int count=0;
    while(scanf("%lf",&a))
    {
        if(a<0) break;
        else
        {
            count+=1;
            if(count==1)
            {
                B=a;
                L=a;
            }
            else
            {
                if(a>B)
                {
                    B=a;
                }
                if(a<L)
                {
                    L=a;
                }
            }
        }
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",B,L);
    return 0;
}
