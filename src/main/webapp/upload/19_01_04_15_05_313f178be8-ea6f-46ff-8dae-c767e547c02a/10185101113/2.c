#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    char x,y;
    while (scanf("%d%c%d%c%d",&a,&x,&b,&y,&c)!=EOF)
    {

        if(a+b<c)
        {
            int num1,beishu1=1,flag1=0;
            for(num1=0;num1<=9;num1++)
            {
                if(c==a*beishu1+b)
                {
                    flag1=1;
                    break;
                }
                else
                    beishu1 *=10;
            }
            int num2,beishu2=10,flag2=0;
            for(num2=-1;num2>=-9;num2--)
            {
                if(c==a+b*beishu2)
                {
                    flag2=1;
                    break;
                }
                else
                    beishu2 *=10;
            }
            if(flag1==1)
                printf("%d",num1);
            else
                printf("%d",num2);
        }
    }
    return 0;
}
