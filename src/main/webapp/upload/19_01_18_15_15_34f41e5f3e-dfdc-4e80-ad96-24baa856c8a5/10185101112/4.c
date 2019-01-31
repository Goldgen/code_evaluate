#include <stdio.h>

int main()
{
    float x,y,max,min;//x为学生成绩
    scanf("%f",&x);
    max=min=x;
    while ((x>=0)&&(y>=0))
        {
            scanf("%f",&y);
            if (y>=0)
            {
            max=(max>y)?max:y;
            min=(min<y)?min:y;
            }
            else break;
        }

    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
    }