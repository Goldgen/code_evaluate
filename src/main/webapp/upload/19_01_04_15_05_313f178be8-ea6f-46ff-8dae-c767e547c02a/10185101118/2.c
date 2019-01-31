#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,x,y;
    long c,k;
    scanf("%d+%d=%d",&a,&b,&c);
    i=0;x=a;y=b;
    if (c==a+b) printf("%d",i);
    else
    {
        do
        {
            x*=10;
            k=x+y;
            i++;
        }while (i!=9 && k!=c);
        if (k==c) printf("%d",i);
        else
        {
            i=0;x=a;
            do
            {
                y*=10;
                k=x+y;
                i++;
            }while (k!=c);
            printf("-%d",i);
        }
    }
    return 0;
}
