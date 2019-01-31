#include <stdio.h>
int main()
{
	double high=-1.0,low=99999.0,c;
	int n=1;
    for(;;n++)
    {
        scanf("%lf",&c);
        if(c<0.0)
            break;
        if(c>high)
            high=c;
        if(c<low)
            low=c;
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",high,low);

}