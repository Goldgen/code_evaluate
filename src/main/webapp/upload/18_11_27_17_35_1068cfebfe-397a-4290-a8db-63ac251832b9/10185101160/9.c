#include<stdio.h>
#include<string.h>
void Read(char m[],char m2[], int* l);//???????
void turn(char a[],char a2[],int l1,int l2,int* ma,int* mi);//?????? 
int main()
{
	char str[500],str2[500],/*????????*/
		 arr[500],arr2[500];/*????????*/
	int  sum[501]={0},/*?*/add=0,/*??*/
		 len1=0,/*??????*/len2=0,/*??????*/
		 max=0,/*????*/min=0,/*????*/j=0,/*????*/x=0/*?????*/; 
	Read(str,str2,&len1);//?????? 
	Read(arr,arr2,&len2);//?????? 
	if(len1 > len2) 
		turn(arr,arr2,len1,len2,&max,&min);
	else
		turn(str,str2,len1,len2,&max,&min);//?????? 
	for(j = max;j >= 0;j--)//???? 
	{
		if(x > 9)	
			add = 1;
		else
			add = 0;
		x = str[j] -'0' + arr[j] -'0' + add;
		sum[j] = x % 10 ;	
	}
	for(j= !add;j<=max;j++)
		printf("%d",sum[j]);//?????? 
	return 0;
}
void Read(char m[],char m2[], int* l)//??????? 
{
	int* ll = l;
	gets(m+1);
	*ll = strlen(m);
	m[0] = '0';
	m[*ll] = '\0';
	strcpy(m2,m);
}
void turn(char a[],char a2[],int l1,int l2,int* ma,int* mi)//?????? 
{
	int i;
	int* mma = ma, *mmi = mi;	
	*mma = l1-1;
	*mmi = l2-1;
	for(i=0;i<=*mma-*mmi;i++)
		a[i] = '0';
	for(i=*mma-*mmi+1;i<=*mma;i++)
		a[i] = a2[i-*mma+*mmi];
}