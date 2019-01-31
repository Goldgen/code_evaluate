#include <stdio.h>

int main(void)
{
    int x,y,z;
    for(x=1;x<=96/7;x++){
        for(y=1;y<=96/5;y++){
            for(z=1;z<=(98/3+1);z++){
                if(x+y+z*3==100&&x*7+y*5+z==100)
                    printf("%d %d %d",x,y,z*3);
            }
        }
    }
    return 0;
}
