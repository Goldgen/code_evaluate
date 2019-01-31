#include <stdio.h>

int zhuanhuan(int i){
    int b;
    b = i%2;
    if(i<2)
	{
        printf("%d",b);
    }
	else
	{
        i = i/2;
        zhuanhuan(i);
        printf("%d",b);
    }
	return;
}

int main(void){
    int i;
    scanf("%d",&i);
    zhuanhuan(i);
    return 0;
} 
