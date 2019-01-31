#include<stdio.h>
int main()
{
    int x,y;
    int z;
    for(x=1;x<=100;x++){
        for(y=1;y<=100-x;y++){
            for(z=1;z<=100-x-y;z++){

                if(7*x+5*y+z/3==100&&x+y+z==100&&x%3==0)
                    printf("%d %d %d",x,y,z);
            }
        }
    }


    return 0;
}
