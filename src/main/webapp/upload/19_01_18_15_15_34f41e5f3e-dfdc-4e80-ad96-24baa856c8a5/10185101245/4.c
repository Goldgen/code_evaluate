#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b;
     scanf("%f",&b);
    float min=b;
    float max=b;
     while (b>0)
        {
            scanf("%f",&b);
        while (b>0)
            {

        if (b>=max)
        {
            min=min;
            max = b;
            break;
        }

        else{
            max=max;
            if(b<=min)
                min=b;
			 else
                min=min;
			break;
			
        }
            }
        }

    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
