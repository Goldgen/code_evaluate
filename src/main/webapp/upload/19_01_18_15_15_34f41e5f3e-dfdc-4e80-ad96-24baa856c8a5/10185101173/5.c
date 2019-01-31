#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ji_shu=0,ou_shu=0,a=0;
    for(;a<=100;++a)
    {if(a%2==0)
      ou_shu+=a;
     else
      ji_shu+=a;}
     printf("%d %d",ji_shu,ou_shu);
     return 0;
}
