#include <stdio.h>
#include <stdlib.h>

int main()
{float  h=100,s=0,h0;
int i=0;
while (i<10)
{
    i++;
    h*=0.5;
    s+=h*2;
}
h0=h;
s=s+100-2*h0;
    printf("%0.3f %0.3f",s,h0);
    return 0;
}

