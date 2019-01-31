#include <stdio.h>

int main()
{
    double a, b,result = 0;
    char ch = '0';

    scanf("%lf %c %lf",&a,&ch,&b);


    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
		 if(ch == '+')
            result = a + b;
        else if(ch == '-')
            result = a - b;
        else if(ch == '*')
            result = a * b;
        else
            result = a / b;

        printf("%.3lf",result);
	}
    else
    {
        printf("ERROR!");
    }

    return 0;
}