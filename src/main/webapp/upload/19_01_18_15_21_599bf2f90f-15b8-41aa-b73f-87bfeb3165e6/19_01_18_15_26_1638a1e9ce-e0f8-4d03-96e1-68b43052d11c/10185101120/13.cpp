#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf ("%d %d %d",&a,&b,&c);
	if (b==11||b==12||b==13)
	{
		printf ("%dth ",b);
	}
	else
	{
	d=b%10;
    switch (d)
    {
    	case 1:printf ("%dst ",b);break;
    	case 2:printf ("%dnd ",b);break;
		case 3:printf ("%drd ",b);break;
		case 4:printf ("%dth ",b);break;
		case 5:printf ("%dth ",b);break;
		case 6:printf ("%dth ",b);break;
		case 7:printf ("%dth ",b);break;
		case 8:printf ("%dth ",b);break;
		case 9:printf ("%dth ",b);break;
		case 0:printf ("%dth ",b);break; 
		default :break;
	}}
	a=a+12;
	switch (a)
	{
		case 13:printf ("January ");break;
		case 14:printf ("February ");break;
		case 15:printf ("March ");break;
		case 16:printf ("April ");break;
		case 17:printf ("May ");break;
		case 18:printf ("June ");break;
		case 19:printf ("July ");break;
		case 20:printf ("August ");break;
		case 21:printf ("September ");break;
		case 22:printf ("October ");break;
		case 23:printf ("November ");break;
		case 24:printf ("December ");break;
		default : break;
	}
	printf ("%d",c);
	return 0;
 } 