#include<stdio.h>
#include<limits.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8;
    int m1,m2,m3,m4,m5,m6,m7,m8;
	int a,b;
    scanf("%d %d %d",&n1,&n2,&n3);
    scanf("%d %d %d",&n4,&n5,&n6);
    scanf("%d %d",&n7,&n8);
    a=n1+n2+n3+n4+n5+n6+n7+n8;
		printf("%d\n",a);

    scanf("%d,%d,%d",&m1,&m2,&m3);
    scanf("%d,%d,%d",&m4,&m5,&m6);
    scanf("%d,%d",&m7,&m8);
	b=m1+m2+m3+m4+m5+m6+m7+m8;
		printf("%d",b);
		return 0;
}