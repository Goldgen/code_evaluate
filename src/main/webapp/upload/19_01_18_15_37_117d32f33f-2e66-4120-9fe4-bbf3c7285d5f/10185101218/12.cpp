#include <stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c;
    char ch;
    scanf("%f%c%f",&a,&ch,&b);
    switch(ch)
    {
        case '+':c=a+b;
        break;
        case '-':c=a-b;
        break;
        case '*':c=a*b;
        break;
        case '/':c=a/b;
			break;
        default:break;
    }
    printf("%.3f",c);
    return 0;
}
