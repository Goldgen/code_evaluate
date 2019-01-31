#include <stdio.h>
#include <stdlib.h>
int main()
{
    float score[100];
    float mi,ma;
    int i = -1;
    int j;
    do{
        i++;
        scanf("%f",&score[i]);

    }while(score[i]>=0);
    ma=score[0];
    for(j=0;j<i;j++)
    {
        if(score[j]>ma)
        {
            ma=score[j];
        }
    }
    mi=score[0];
    for(j=0;j<i;j++)
    {
         if(score[j]<mi)
        {
            mi=score[j];
        }
    }

    printf("最高成绩是: %.2f, 最低成绩是: %.2f",ma,mi);
}