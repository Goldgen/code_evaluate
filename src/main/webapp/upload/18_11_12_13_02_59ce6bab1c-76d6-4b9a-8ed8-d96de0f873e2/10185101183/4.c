#include<stdio.h>
int main()
{
    int a;int n;
    scanf("%d",&a);
    if(a>=0)
    {
	int i=a/10000000%10;
	int h=a/1000000%10;
	int g=a/100000%10;
    int b=a/10000%10;
    int c=a/1000%10;
    int d=a/100%10;
    int e=a/10%10;
    int f=a%10;
    n=b*64*64+c*64*8+d*64+e*8+f+g*64*64*8+h*64*64*64+i*64*64*64*8;
    printf("%d",n);
    }
}
