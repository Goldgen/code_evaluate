#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=1,b=1,c=1;
	for(a=1;a<15;a++){
        for(b=1;b<19;b++){
            for(c=1;c<264;c++){
                if((a+b+c==100) &&(7*a+5*b+c/3.0==100)){
                    printf("%d %d %d",a,b,c);
                }
            }
        }
	}
	return 0;
}
