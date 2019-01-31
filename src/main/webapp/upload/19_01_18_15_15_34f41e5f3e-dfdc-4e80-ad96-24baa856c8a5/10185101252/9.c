#include <stdio.h>
#include <string.h>

char map[15][15];
int n;

int main(int argc, char* argv[]){
	
	memset(map,0,sizeof(map));
	map[1][1] = 1;
	scanf("%d", &n);
	printf("1\n");
	for(int i = 2 ; i <= n; i++){
		for(int j = 1; j <= i; j++){
			map[i][j] = map[i-1][j-1] + map[i-1][j];
			printf("%d", map[i][j]);
			if(j != i)
				printf(" ");
		}
		if(i != n)
			printf("\n");
	}

}