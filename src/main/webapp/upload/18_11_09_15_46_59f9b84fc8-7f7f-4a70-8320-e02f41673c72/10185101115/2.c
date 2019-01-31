#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{float i=1,j=2;
float s=0;
for(int n=1;n<=50;n++)
{
    float m=j/i;
    j=i+j;
    i=j-i;
    s+=m;
}
printf("%.2f",s);
    return 0;
}

