#include<stdio.h>
#include<string.h>
	int y,m,a,b,M;
	char str[7];
	char STR[13];
void turn1()//判断闰年函数
{
	if(b==0)
		strcpy(STR,"闰年");
	else
	    strcpy(STR,"不是闰年");
}
void turn2()//判断季节函数
{
	switch(m)
	{
		case 3: case 4: case 5:
			strcpy(str,"春季");break;
		case 6: case 7: case 8:
	 		strcpy(str,"夏季");break;
	 	case 9: case 10:case 11:
			strcpy(str,"秋季");break;
		default:
			strcpy(str,"冬季");break;
	}
}
void turn3()//判断天数函数
{
	switch(M)
	{
	 	case 4:case 6:case 9:case 11:
			M=30;break;
	 	case 2:
	 		if(b==0)
	 			M=29;
	 		else
	 			M=28;
	 	    break;
	 	default:
			M=31;break;
	 }
}
int main()
{	
	scanf("%d%d",&y,&m);
	a=y%100;
	if(a==0)
		b=y%400;
	else
		b=y%4;
	M=m;
	turn1();
	turn2();
	turn3();
	printf("%s %s %d",STR,str,M);
	return 0;	
}
