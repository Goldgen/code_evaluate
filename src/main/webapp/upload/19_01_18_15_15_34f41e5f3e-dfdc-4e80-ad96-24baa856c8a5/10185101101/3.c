#include <stdio.h>
#include <stdlib.h>

int prinum(int num)
{
    int j,k;
    k=0;
    for(j=1;j<=num;++j)
    {
        if(num%j==0)++k;
    }
        if(k==2)
            return 1;


}

int main()
{
    int even;
    int i;
    scanf("%d",&even);
    printf("%d",even);
    for(i=1;i<=1500;i=i+2)
    {
        if(prinum(i)==1)
        {
            if((prinum(even-i)==1)&&(i<=even-i))
                printf("=%d+%d",i,even-i);
        }

    }
}