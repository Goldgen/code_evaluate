# include <stdio.h>
int main()
{
	int a ,b ,c, m;
	int max(int x, int y);
	scanf("%d %d %d", &a, &b, &c);
	m = max(a,b);
	m = max(m,c);
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