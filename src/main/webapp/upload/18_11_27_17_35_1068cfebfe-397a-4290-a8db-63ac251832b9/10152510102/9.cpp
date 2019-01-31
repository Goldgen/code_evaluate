#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int c1[1001],c2[1001];
	memset(c1,0,sizeof(c1));
	memset(c2,0,sizeof(c2));
	int n=0,s1=0,s2=0,ch,i,j;
	while(1)
	{
		ch=getchar();
		if(ch)
		if(ch=='\n')
		{
			if(s1==0)
			{
				s1=n;
				n=0;
			}
			else
			{
				s2=n;
				break;
			}
		}
		else
		{
			if(s1==0)
			{
				n++;
				c1[n]=ch-'0';
			}
			else
			{
				n++;
				c2[n]=ch-'0';
			}
		}
	}
	if(s1<s2)
	{
		int temp;
		for(i=1;i<=s2;i++)
		{
			temp=c1[i];
			c1[i]=c2[i];
			c2[i]=temp;
		}
		temp=s1;
		s1=s2;
		s2=temp;
	}
	bool mark=false;
	j=s2;
	for(i=s1;i>=1;i--)
	{
			int now;
			if(mark)
			{
				now=c1[i]+c2[j]+1;
				mark=false;
			}
			else
				now=c1[i]+c2[j];
			if(now>=10)
			{
				mark=true;
				now-=10;
			}
			c1[i]=now;
			if(j>0)
				j--;
	}
	if(mark)
		cout<<1;
	for(i=1;i<=max(s1,s2);i++)
		cout<<c1[i];
	return 0;
}
