#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a=7,b=5;
    int x,y;
    for(x=1;x<=100/a;x++){
        for(y=1;y<=100/b;y++){
            if((100-x-y)%3==0&&a*x+b*y+(100-x-y)/3==100)
                printf("%d %d %d",x,y,100-x-y);
        }
    }
}