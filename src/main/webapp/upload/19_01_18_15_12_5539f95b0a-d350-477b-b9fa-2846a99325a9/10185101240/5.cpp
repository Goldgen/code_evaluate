#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h;
	int G,H;
    scanf("%d %d %d\n",&a,&b,&c);
    scanf("%d %d %d\n",&d,&e,&f);
    scanf("%d %d\n",&g,&h);
    G=a+b+c+d+e+f+g+h;
    
    printf("%d\n",G);
	scanf("%d,%d,%d\n",&a,&b,&c);
    scanf("%d,%d,%d\n",&d,&e,&f);
    scanf("%d,%d\n",&g,&h);
	H=a+b+c+d+e+f+g+h;
	printf("%d",H);
	
    return 0;
}