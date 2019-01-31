#include <stdio.h>
int main(void)
{
    float s,gmax,gmin;

    scanf("%f ",&s);

    gmax=s;gmin=s;

    while(s>=0)

    {
        if(s>gmax) gmax=s;

        if(s<gmin) gmin=s;

        scanf("%f",&s);
    }

    printf("最高成绩是: %.2f, 最低成绩是: %.2f",gmax,gmin);
    return 0;
}
