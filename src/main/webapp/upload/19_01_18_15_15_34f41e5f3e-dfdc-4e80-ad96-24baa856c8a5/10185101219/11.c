#include <stdio.h>
#include <stdlib.h>



int main()

{
    int d,e;
    {for(int a=1;a<=9;++a)
        for(int b=0;b<=9;++b)
            for(int c=0;c<=9;++c)
           {d=100*a+10*b+c;
           e=a*a*a+b*b*b+c*c*c;
           if (d==e&&d!=407)
    printf("%d ",e);
           if(d==407)
    printf("%d",e);
    }

   }
    return 0;
}
