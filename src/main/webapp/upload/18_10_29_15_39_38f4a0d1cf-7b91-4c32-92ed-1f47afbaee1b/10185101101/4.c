#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max,min,a[1000];
    int i,j=0;
    for(i=0;a[i-1]!=-1;++i)
        scanf("%f",&a[i]);
    max=a[0];min=a[0];
    for(j=0;j<i-1;++j)
    {
        if(a[j]>max)
            max=a[j];
        else if(a[j]<min)
            min=a[j];
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
