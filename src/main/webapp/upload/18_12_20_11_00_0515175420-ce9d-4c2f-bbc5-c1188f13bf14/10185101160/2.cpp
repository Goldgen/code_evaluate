#include<stdio.h>
#include<string.h>
#include<ctype.h>
void res(int arr[11][101]);//位置初始化函数 
void weizhi(int len,int*arr,int* brr,char*ss);//读入单词位置函数 
int upper(char s[]);//判断单词是否全为大写字母函数 
void swap(int*arr,int* brr);//交换位置函数 
void copy(int*arr,int*brr,char*s0,char*ss);//读取单词函数 
void print(int n,int arr1[][101],int arr2[][101],char str[][201]);//输出函数 

int main()
{
	int i=0,l=0,g=0;//循环计数 
	int n=0,len=0;//行数,长度,空格标志 
	char str[11][201]/*输入字符串*/, s1[101],s2[101]/*用作比较的两单词*/;
	int  arr1[11][101],arr2[11][101];//首末字母位置矩阵 
	res(arr1);res(arr2);//初始化位置矩阵	
	scanf("%d",&n);//输入行数 
	getchar();
	for(i = 0;i < n;i ++)
		gets(str[i]);//读入字符串 
	for(i = 0;i < n;i ++)
	{	len = strlen(str[i]);
		weizhi(len,arr1[i],arr2[i],str[i]);//确定每个单词的位置		
	}
	for(i = 0;i < n;i ++)//行循环
	{	for(l = 0;arr1[i][l] != -1;l ++)//顺序读入单词
		{	for(g=l+1;arr1[i][g] != -1;g++)//读取下一个单词
			{	copy(arr1[i]+l,arr2[i]+l,s1,str[i]);
 				copy(arr1[i]+g,arr2[i]+g,s2,str[i]);//读入前后两个单词
				if(upper(s1)&&upper(s2)&&strcmp(s2,s1)< 0)//同时全为英文单词进行互换比较 
				{	swap(arr1[i]+g,arr1[i]+l);
					swap(arr2[i]+g,arr2[i]+l);
				}		 
			}		
		}
	}
	print(n,arr1,arr2,str);//输出结果
	return 0;
}


void res(int arr[11][101])//位置初始化函数
{
	int i,j;
	for(i = 0;i <11;i ++)
	{
		for(j = 0;j < 101; j++)
			arr[i][j] = -1;
	}
}

void weizhi(int len,int*arr,int* brr,char*ss)//读入单词位置函数
{
	int j=0,k=0,h=0,x=0;
	for(j = 0;j < len;j ++)
		{	if(x == 0)
			{	*(arr+k) = j;
				x = 1;
				k++;
			}
			if(*(ss+j)== ' ' )
			{	x = 0;
				*(brr+h)= j-1;
				h++;
			}
		}
		*(brr+h)= len-1;
		*(arr+k)= -1;
		*(brr+h+1) = -1;
 } 

void copy(int*arr,int*brr,char*s0,char*ss)//读取单词函数
 {
 	int ii=0,kk=0;
 	for(ii = *arr;ii<=*brr;ii++)
	{	*(s0+kk)= *(ss+ii);
		kk++;
	}
	s0[kk]='\0';
 }
int upper(char s[])//判断单词是否全为大写字母函数 
{
	unsigned int h=0;
	int y=1;
	for(h = 0;h < strlen(s);h++)
	{if(isupper(s[h]))
			y = 1;
		else
		{y = 0;
			break;
		} 
	}
	return y;
}

void swap(int*arr,int*brr)//交换函数
{
	int min;
	min = *arr;        
	*arr= *brr;
	*brr= min;
}

void print(int n,int arr1[][101],int arr2[][101],char str[][201])//输出函数 
{
	int i,j,k;
	for(i = 0 ; i < n; i ++)
	{
		printf("case #%d:\n",i);//格式头 
		for(k=arr1[i][0];k<=arr2[i][0];k ++)//输出第一个单词 
				printf("%c",str[i][k]);
		for(j=1;arr1[i][j] != -1;j++)//输出后续单词 
		{
			printf(" ");
			for(k=arr1[i][j];k<=arr2[i][j];k ++)
				printf("%c",str[i][k]);
		}
		printf("\n");
	}
}