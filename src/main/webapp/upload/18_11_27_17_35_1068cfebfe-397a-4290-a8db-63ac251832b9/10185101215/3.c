#include<stdio.h>
#include<math.h>
int main()
{
   double amounts[5],money,cents[5];int dollars[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%lf",&money);
        amounts[i]=money;
        dollars[i]=(int) money;
        cents[i]=amounts[i]-dollars[i];
    }
    for(i=0;i<5;i++)
    {
        if(i<4)
        printf("$%.2lf ",dollars[i]+cents[i]);
        else
         printf("$%.2lf",dollars[i]+cents[i]);
    }
    return 0;
}