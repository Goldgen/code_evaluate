#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p=1,a=1,e=1;
while(1/a>=1e-6){
a*=p;
e+=1/a;
p++;}
printf("%.6f",e);
return 0;
}
