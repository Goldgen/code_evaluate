#include <stdio.h>

int main()
{
    double max=0, min=100, x, y=0;

    while(y==0)
    {
      scanf("%lf", &x);

      if(x<0)
            break;
      else
      {if(x>=max)
            max = x;

        if(x<=min)
            min = x;
      }
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf", max, min);
}
