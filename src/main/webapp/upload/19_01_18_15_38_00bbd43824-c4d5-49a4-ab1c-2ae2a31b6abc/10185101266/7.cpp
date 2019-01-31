# include <stdio.h>
int main()
{
	int a,b,c,d,m;
	int max(int x, int y);
	scanf("%d %d %d %d", &a, &b, &c,&d);
	m = max(a,b);
	m = max(m,c);
	m = max(m,d);
    printf("max = %d", m);
    return 0;
}
int max(int x, int y)
{
	if (x>y)
	return x;
	else
	return y;
} 