#include <stdio.h>
int main()
{
    float x,y,z;
    for(x=1.0f;x<=98.0f;x++)
    {
        for(y=1.0f;y<=98.0f;y++)
        {
            z=100.0f-x-y;
            if(7.0f*x+5.0f*y+z/3.0f==100.0f)
                printf("%.0f %.0f %.0f",x,y,z);
        }
    }
    return 0;
}
