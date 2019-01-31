#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1,sum=0,sum1=0;
    for(int i=0;i<9;++i)
    {a=i+1;
     for(int b=0;b<10;++b)
        {for(int c=0;c<10;++c)
          {sum=(a*100)+(b*10)+c;
           sum1=(a*a*a)+(b*b*b)+(c*c*c);
           if(sum==sum1&&sum!=407)
            printf("%d ",sum);
           else if(sum==sum1&&sum==407)
            printf("%d",sum);
           }}}
    return 0;
}
