#include <stdio.h>
int main()
{
    int year,month,day;
    scanf("%d%d",&year,&month);
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
    	printf("闰年");
    	switch(month)
    	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    		day=31;
    		break;
    	case 2:
    		day=29;
    		break;
    	default:
    		day=30;
    		break;
    	}
	}
	else
	{
		printf("不是闰年"); 
		switch(month)
    	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    		day=31;
    		break;
    	case 2:
    		day=28;
    		break;
    	default:
    		day=30;
    		break;
    	}
	}
	switch(month)
	{
		case 1:case 2:case 12:
			printf(" 冬季 ");
			break;
		case 3:case 4:case 5:
			printf(" 春季 ");
			break;
		case 6:case 7:case 8:
			printf(" 夏季 ");
			break;
		default:
			printf(" 秋季 ");
			break;
	}
    printf("%d",day);
	return 0;
}