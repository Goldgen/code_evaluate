#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int x,y,z;
    for(x=1;x<100/7;x++){
            for(y=1;y<20;y++){
                for(z=1;z<300;z++){
                    if(fabs(7*x+5*y+z/3.0-100)<0.00001 && (x+y+z==100))goto Final;
                }
            }
    }
    Final:
        printf("%d %d %d",x,y,z);

    return 0;
}

