#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int sum;
    int i=0;
    for(a=1;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            for (c=0;c<=9;c++)
            {
                if(100*a+10*b+c==a*a*a+b*b*b+c*c*c)
                {
                 sum=100*a+10*b+c;
                 i++;
                 printf("%d",sum);
                 if(sum!=407)
                    printf(" ");
                }
            }
        }
    }

        return 0;
}
