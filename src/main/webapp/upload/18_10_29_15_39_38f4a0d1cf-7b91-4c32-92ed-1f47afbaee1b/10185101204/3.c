#include <stdio.h>
int main()
{
    int n=0,a=2,b=2;
    scanf("%d",&n);
    printf("%d",n);
    for(a=2;a<n/2+1;++a)
    {b=n-a;
    if(a==2)
       {for(int i=2;i<b/2-1,b%i!=0;i++)
            {if(i==b-1)
                printf("=%d+%d",a,b);}}
    else
        {for(int i=2;i<a/2-1,a%i!=0;i++)
        {if(i==a-1)
            {if(b==2)
                printf("=%d+%d",a,b);
            else{for(int i=2;i<b/2-1,b%i!=0;i++)
                {if(i==b-1)
             printf("=%d+%d",a,b);}}}}}}
}