#include<stdio.h>
int main()
{
	char a;
	float b,c,d;
	scanf("%f%c%f",&b,&a,&c);
	switch(a)
	{
	
	case '+':
    d=b+c;
    break;
    case '-':
    d=b-c;
    break;
    case '*':
    	d=b*c;
    	break;
    	case '/':
    		d=b/c;
	break;
	default:
		d=0;
		break;
}
printf("%.3f",d);
	return 0;	
	

 }
