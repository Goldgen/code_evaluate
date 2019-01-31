#include <stdio.h>
int main()
{
    double max=0,min=0,degree=0;
    int i=1;
    while (scanf("%lf",&degree))
    {
        if(degree<0)break;
        else
        {
            if(i==1){max=degree;
                    min=degree;}
            else {if(degree>max)max=degree;
                  if(degree<min)min=degree;}
        }
        i++;
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}

