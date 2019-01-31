#include <stdio.h>
#include <string.h>
#include <math.h>
	int n=0,y=0;
	double x=0,z=0;
	int i=0,j=0,k=0,h=0,p=0,q=0,r=0;
	int str[11];//总集合 
	int arr[11]={0,0,0,0,0,0,0,0,0,0};//子集的二进制表示
void subset1()//将子集转换为二进制 
{	
	while(j>0)
	{
		y=j&(-j);//求二进制最低位1的权 
		if(y>0)
		{
			z = log( (double)y ) / log(2);//最低位1位置 
			arr[(int)z] = 1;//将对应二进制位写为1
			j -= y;//二进制减去最低位1 
		}
	}		 		
}		
void subset2()//输出第一个元素 
{
	
	for(k=0;k<n;k++)//检测二进制数组中第一个1的位置 
	{
		if(arr[k]==1)
		{
			printf("%d",str[k]);//输出总集合中对应元素
			h=k;
			break;
		}			 	
	}
}
void subset3()//输出其他元素 
{
	for(r=h+1;r<n;r++)//继续检测二进制数组1的位置 
	{
		if(arr[r]==1)
			printf(",%d",str[r]);//输出总集合中对应元素	
	}		
}
void subset4()//二进制数组初始化
{
	for(q=0;q<10;q++) 
		arr[q]=0;
}
int main()
{ 
	scanf("%d",&n);
	x = pow(2,n);//子集个数 
	for(i=0;i<n;i++)//总集合
		str[i] = i; 
	printf("{}");//输出空子集	
	for(p=1;p<x;p++)//输出非空子集 
	{	
		j=p;
		subset1();//将子集转换为二进制
		printf("\n{");
		subset2();//输出第一个元素
		subset3();//输出其他元素 
		printf("}");
		subset4();//初始化二进制数组 
	}		
	return 0;
}