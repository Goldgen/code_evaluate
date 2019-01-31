#include <stdio.h>
#include <string.h>

int main() {
	char a[10005], b[10005];
	
	scanf("%s%s", a, b);

	int aLen = strlen(a);
	int bLen = strlen(b);

	if (aLen != bLen) {
		printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
		return 0;
	}
    int flag =1;
	
	for (int i = 0; i < bLen; i++) {
		flag = 1;
		for (int j = 0; j < aLen; j++) {
			if (b[(i + j) % bLen] != a[j]) flag = 0;
		}
		if (flag ==1) {
			printf("\"%s\" is a rotation of \"%s\"",a,b);
			
			return 0;
		}
	}

	printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
	return 0;
}
