#include <stdio.h>
int main()
{
 double n,max1=0,min1=101,num=0;
for(int i=1;num=i;i++)
{ scanf("%lf",&n);
        if(n<0)
            break;
        num++;
        if(n>max1)
            max1=n;
        if(n<min1)
            min1=n;
    }

printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max1,min1);

return 0;
}

