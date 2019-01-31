#include<stdio.h>
	int n=0,turn=0,x=0,y=0,z=0;
	int i=0,j=0,k=0;	//循环计数
	char ch; 
void prt1()	//上半部分 
{
	for(j=1;j<n;j++)	//第1行 
		printf(" ");
	printf("A");
	for(i=2;i<=n;i++)	//第2-n行 
	{
		printf("\n");
		for(j=1;j<=n-i;j++)
			printf(" ");
		y = 2*i-1 ;		//该行字母数 
		for(k=1;k<=y;k++)
			printf("%c",i+turn);
	}
}
void prt2()//下半部分 
{
	for(i=n+1;i<=x;i++)
	{
		printf("\n");
		for(j=1;j<=i-n;j++)
			printf(" ");
		z = 4*n-2*i-1;	//该行字母数 
		for(k=1;k<=z;k++)
			printf("%c",i+turn);
	}
}	 
int main()
{
	scanf("%d",&n);
	x = 2*n-1;	//行数及单行最大字母数
	turn = 'A'-1;	//1->A...26->Z转换 
	prt1();//上半部分 
	prt2();//下半部分
	return 0;
}
