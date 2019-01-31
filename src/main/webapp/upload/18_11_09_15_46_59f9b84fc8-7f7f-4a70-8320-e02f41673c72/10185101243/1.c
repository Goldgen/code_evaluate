#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    for (b=0;b<=9;b++)
       {a=10*b+6;
       if((a%3==0)&&(a<90))
        printf("%d ",a);
       else if(a%3==0)
        printf("%d",a);
       else
        continue;
       }

    return 0;
}
