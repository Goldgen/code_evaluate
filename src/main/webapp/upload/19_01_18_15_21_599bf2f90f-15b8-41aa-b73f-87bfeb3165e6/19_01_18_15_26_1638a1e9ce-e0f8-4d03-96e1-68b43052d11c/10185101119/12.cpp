#include <stdio.h>
int main()
{
    double a,b,c;
    char ch;
    scanf("%lf %c %lf",&a,&ch,&b);
    switch(ch)
    {
    	case '+':
    		c=a+b;
    		break;
    	case '-':
    		c=a-b;
    		break;
    	case '*':
    	    c=a*b;
    	    break;
    	case '/':
    	    c=a/b;
    	    break;
    	default:
    		break;
	}
	printf("%.3lf",c);
	return 0;
 } 