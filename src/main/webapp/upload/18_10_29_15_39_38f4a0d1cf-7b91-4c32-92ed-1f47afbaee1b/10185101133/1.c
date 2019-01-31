#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x=0;
    while(x<15){
        int y=0;
        while(y<21){
            int z=0;
            while(z<301){
                if(x+y+z==100 && x*y*z!=0 && 7*x+5*y+z/3==100)
                    printf("%d %d %d",x,y,z);
                z+=3;
            }
            y++;
        }
        x++;
    }
    return 0;
}