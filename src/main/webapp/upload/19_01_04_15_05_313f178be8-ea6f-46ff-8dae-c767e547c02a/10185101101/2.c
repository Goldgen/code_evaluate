#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a=0;
    int b=0;
    int c=0;
    int i=0;
    scanf("%d+%d=%d",&a,&b,&c);
    int correct = 0;
    correct = a+b;

    for(i=0;a*pow(10.0,(double)i)<c;++i)
    {
        if(a*pow(10.0,(double)i)+b==c)
        {
            printf("%d",i);
            return 0;
        }

    }
        for(i=0;b*pow(10.0,(double)i)<c;++i)
        {
            if(b*pow(10.0,(double)i)+a==c)
            {
                printf("%d",i);
                break;
            }

        }

    return 0;
}
