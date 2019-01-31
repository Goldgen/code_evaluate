#include <stdio.h>
#include <stdlib.h>

int main()
{float n,max,min;
scanf("%f",&n);
max=min=n;
while (n>0)
{
    scanf("%f",&n);
    if(max<n)
    {
        max=n;
    }
    if((min>n)&&(n>0))
    {
        min=n;
    }
}
printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}