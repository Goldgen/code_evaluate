#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int number,i, j, k,l;
	bool m=false;
	scanf("%d", &number);
	int a[100] = { 0 };
	for (i = 0; i < number; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &j);
	for (i = 0; i < number; i++) {
		if (a[i] == j) {
			m = true;
			break;
		}
	}
	if (m == false)
			printf("ERROR");
	for (l = 0; l < number; l++) {
		if (a[l] == j)
		{
			for (i = 0; i < number; i++) {
				if (a[i] == j) {
					for (k = i; k < number; k++) {
						a[k] = a[k + 1];
					}
					break;
				}
			}
			for (i = 0; i < number - 2; i++) {
				printf("%d ", a[i]);
			}
			printf("%d", a[number - 2]);
		}
	}
	
	return 0;
}