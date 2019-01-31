#include <stdio.h>

int main(void)
{
    int i;
	int index = 0;
    for(i=100;i<1000;++i)
    {
        if(i==(i/100)*(i/100)*(i/100)+(i/10%10)*(i/10%10)*(i/10%10)+(i%10)*(i%10)*(i%10))
        {
			if(index == 0){
				index++;
                printf("%d",i);
			}
			else{
			     printf(" %d",i);}
        }
    }
    return 0;
}
