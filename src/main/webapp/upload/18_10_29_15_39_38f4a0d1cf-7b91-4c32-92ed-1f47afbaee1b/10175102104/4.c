#include<stdio.h>
#include<stdlib.h>

double Grade[1000];

int main()
{
    int n=0,i;
    double max,min;
    while(1)
    {
        scanf("%f ",&Grade[n]);
        if(Grade[n]==-1)
        {
            n--;
            break;
        }
        else
        {
            n++;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(Grade[i]>Grade[i+1])
        {
            max=Grade[i];
            min=Grade[i+1];
        }
        else
        {
            max=Grade[i+1];
            min=Grade[i];
        }
    }
    printf("最高成绩是: %.2f,最低成绩是: %.2f",max,min);
    return 0;
}

