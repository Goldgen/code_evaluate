#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,max,min;
	scanf("%f",&x);
	max=x;
	min=x;
    do
    {
        scanf("%f",&x);
		if(x>=0){
        	if(x>max)
            	max=x;
        	if(x<min)
            	min=x;
		}
		else
			break;
    }while(x>=0);
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
