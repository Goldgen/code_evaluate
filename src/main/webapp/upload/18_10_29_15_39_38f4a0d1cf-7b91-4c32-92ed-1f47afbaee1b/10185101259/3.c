#include<stdio.h>

int main()

{ int sum,a,b,i;
    scanf("%d",&sum);
    printf("%d",sum);
    if(a<=10000)
    {for(a=2;a<=sum/2;a++)
        {b=sum-a;
        for(i=2;i*i<=a;i++)
            {if(a%i==0)
            break;}
        for(i=2;i*i<=b;i++)
        {if(b%i==0)
        break;}
        if(i*i>a&&i*i>b)
        printf("=%d+%d",a,b);}
        }
        return 0;
}
