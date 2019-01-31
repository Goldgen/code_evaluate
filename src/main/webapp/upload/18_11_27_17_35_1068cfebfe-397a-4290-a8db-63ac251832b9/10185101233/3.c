#include<math.h>
#include<stdio.h>
int main()
{
    float amounts[5];
    int dollars[5];
    int cents[5];
    int i=0;
    for(int i=0;i<=4;i++)
    {
        scanf("%f",&amounts[i]);
    }
    while(i<4)
    {
        dollars[i]=(int)amounts[i];
        cents[i]=(amounts[i]-dollars[i])*100;
        printf("$%d.%.2d ",dollars[i],cents[i]);
        i++;
    }
    dollars[i]=(int)amounts[i];
        cents[i]=(amounts[i]-dollars[i])*100;
        printf("$%d.%.2d",dollars[i],cents[i]);
    return 0;
}
