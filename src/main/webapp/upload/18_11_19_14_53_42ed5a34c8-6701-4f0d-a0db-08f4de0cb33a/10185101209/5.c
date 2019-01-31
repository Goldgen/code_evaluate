#include <stdio.h>

int Func(int a, int b){
    if(a%b==0||b%a==0)
        return min(a,b);
    else if(a>b)
        return Func(a%b,b);
    return Func(a,b%a);
}

int min(int a, int b){
	if(a>b)
		return b;
	return a;
}

int main()
{
    int num1=0, num2=0;

    scanf("%d %d", &num1, &num2);
    printf("%d",Func(num1,num2));
    return 0;
}