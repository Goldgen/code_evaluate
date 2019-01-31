#include <stdio.h>

int main(void)

{
    float Mark = 0;
    scanf("%f",&Mark);
    float MimMark = Mark;
    float MaxMark = Mark;

    while(Mark>=0)
    {
        if(Mark>=MaxMark)
            MaxMark = Mark;
        if(Mark<=MimMark)
            MimMark = Mark;
        scanf("%f",&Mark);
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",MaxMark,MimMark);
}
