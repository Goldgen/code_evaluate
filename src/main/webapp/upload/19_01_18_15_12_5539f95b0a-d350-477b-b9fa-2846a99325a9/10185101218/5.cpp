#include<stdio.h>
int main()
{
	int a1,b1,c1,d1,e1,f1,g1,h1;
    int a2,b2,c2,d2,e2,f2,g2,h2;
    scanf("%d%d%d",&a1, &b1, &c1);
    scanf("%d%d%d",&d1, &e1,&f1);
    scanf("%d%d",&g1, &h1);
    printf("%d\n",a1+b1+c1+d1+e1+f1+g1+h1);
    scanf("%d,%d,%d", &a2, &b2, &c2);
    scanf("%d,%d,%d",&d2,&e2,&f2);
    scanf("%d,%d",&g2, &h2);
    printf("%d",a2+b2+c2+d2+e2+f2+g2+h2);
    return 0;
}
