#include<stdio.h>
int cha (int x,int y);
int days (int x,int y,int z);
int main()
{
	int a,b,c,d,e,f,m,n,o,p;
	scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	m=days (a,b,c);
	n=days (d,e,f);
	if (a==d)
	{
		o=n-m;
	}
	else if (a+1==d)
	{
		o=365-m+n;
		if (a%4==0&&a%100!=0||a%400==0)
		{
			o=o+1;
		}
	}
	else
	{
		p=cha(a,d);
		o=p+365-m+n;
		if (a%4==0&&a%100!=0||a%400==0)
		{
			o+=1;
		}
	}
	printf ("采集时间为%d天",o);
}
int days (int x,int y,int z)
{
	int n;
	switch (y)
	{
		case 1:n=z; break;
		case 2:n=31+z; break;
		case 3:n=60+z; break;
		case 4:n=91+z; break;
		case 5:n=121+z; break;
		case 6:n=152+z; break;
		case 7:n=182+z; break;
		case 8:n=213+z; break;
		case 9:n=244+z; break;
		case 10:n=274+z; break;
		case 11:n=305+z; break;
		case 12:n=335+z; break;
	}
	if (!(x%4==0&&x%100!=0||x%400==0)&&y>2)
	{
		n-=1;
	}
	return n;
}
int cha(int x,int y)
{
	int n=0;
	for (;x+1<y;x++)
	{
		if (x%4==0&&x%100!=0||x%400==0)
		{
		    n+=366;
	    }
		else
	    {
	        n+=365;
	    }
    }
	return n;
}