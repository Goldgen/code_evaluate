#include <stdio.h>

int main()
{
    float i=0, i1=2, i2=1, j=0, j1=1, j2=1, x=1, y=2;

    for(; x<50; x++)
    {
        i = i1+i2;
        if(i1>i2)
            i2 = i;
        else
            i1 = i;

        j = j1+j2;
        if(j1>j2)
            j2 = j;
        else
            j1 = j;

        y = y+(i/j);
    }
    printf("%.2f", y);
}
