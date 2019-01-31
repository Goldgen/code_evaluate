#include<stdio.h>

int main()

{ int sum,a,b,i,j;
    scanf("%d",&sum);
    printf("%d",sum);
    if(a<=1000)
    {for(a=3;a<=sum/2;a++)
        {b=sum-a;
        for(i=2;i*i<=a;i++)
            {if(a%i==0)
            break;}
        for(j=2;j*j<=b;j++)
        {if(b%j==0)
        break;}
        if(i*i>a&&j*j>b)
        printf("=%d+%d",a,b);}
        }
        return 0;
}
