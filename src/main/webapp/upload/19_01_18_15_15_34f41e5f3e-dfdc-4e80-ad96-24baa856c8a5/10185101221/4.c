#include <stdio.h>
#include <stdlib.h>
int main()
{
    double arr[10000];
    int i=0;
    double temp = 0;
    do
    {
        scanf("%lf",&arr[i]);
    }while(arr[i++]>=0);
    
    for (int a = 0;a < i-1;a++)
    {
        for (int b = 0;b < i - a -2;b++)
        {
            if (arr[b] > arr[b+1])
            {
              temp = arr[b];
              arr[b] = arr[b+1];
              arr[b+1] = temp;
            }
        }
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",arr[i-2 ],arr[0]);
    return 0;
}
