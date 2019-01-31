#include <stdlib.h>
int main()
{
    float x;
    int y;
    scanf("%f",&x);
    if (x>0)
	{
        y=1;
	}
    else
	{ 
		if (x<0)
		{
           y=-1;
		}
        else 
        y=0;
	}
    printf("%d",y);
    return 0;
}