#include<stdio.h>
#include<string.h>
	int y,y2,m1,m2,d1,d2;
	int a,b,i,x,k;
	int z1=0,z2=0,z3=0,z=0;
	int md[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int MD[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void turn1()//差的整年天数 
{
	if(y2>y+2)
	{
		for(i=y+1;i<y2;i++)
		{
			a=i%100;
			if(a==0)
				b=i%400;
			else
				b=i%4;
			int x;
			if(b==0)
			x=366;
			else
			x=365;
			z1+=x;
		}
	}
}
void turn2()//第一年剩的天数
{
	a=y%100;
	if(a==0)
	b=y%400;
	else
	b=y%4;
	if(b==0)
	{   
		for(i=m1;i<13;i++) 
			z2+=md[i];
		z2-=d1;
	 } 
	 else
	 {
		for(i=m1;i<13;i++) 
			z2+=MD[i];
		z2-=d1;
	 }
}
void turn3()//最后一年过去的天数
{
	a=y2%100;
	if(a==0)
	b=y2%400;
	else
	b=y2%4;
	if(b==0)
	{   
		for(i=1;i<m2;i++) 
			z3+=md[i];
		z3+=d2;
	 } 
	 else
	 {
		for(i=1;i<m2;i++) 
			z3+=MD[i];
		z3+=d2;
	 }
}
void turn4()//同一年日期 
{
	a=y%100;
	if(a==0)
		b=y%400;
	else
		b=y%4;
	if(b==0)
		k=366;
	else
		k=365;
    z=z2+z3-k;
	}	
int main()
{	
	scanf("%d%d%d%d%d%d",&y,&m1,&d1,&y2,&m2,&d2);
	turn1();//相差整年天数 
	turn2();//首年剩余天数 
	turn3();//末年已过天数 
	if(y==y2)
		turn4();//同年日期之差 
    else
  		z=z1+z2+z3;//非同年日期之差 
	printf("采集时间为%d天",z);
	return 0;	
}

