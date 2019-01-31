#include <stdio.h>

int get(int a)
{
	if (a == 0) {
		return;
	}
	int t;
	scanf("%d", &t);
	get(t);
	if(t != 0) 
		printf("%d ", t);
	return;
}

int main()
{
	int t;
	scanf("%d", &t);
	get(t);
	printf("%d", t);
	return 0;
}

