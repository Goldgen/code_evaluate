#include <stdio.h>

int get(int a)
{
	if (a <= 0) {
		return;
	}
	int tmp;
	scanf("%d", &tmp);
	get(tmp);
	if(tmp > 0) 
      printf("%d ", tmp);
}

int main()
{
	int tmp;
	scanf("%d", &tmp);
	get(tmp);
	printf("%d", tmp);
	return 0;
}
