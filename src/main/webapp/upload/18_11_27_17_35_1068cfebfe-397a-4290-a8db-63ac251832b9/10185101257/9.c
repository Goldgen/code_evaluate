#include <stdio.h>
#include <string.h>
#define M 100
int main()
{
	int i, j, len_s1, len_s2;
	char s1[M], s2[M];
	int num1[M] = {0};
	int num2[M] = {0};
	scanf("%s %s", s1, s2);
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	for(i=len_s1-1, j=0; i>=0; i--){
		num1[j] = s1[i] - '0';
		j++;
	}
	for(i=len_s2-1, j=0; i>=0; i--){
		num2[j] = s2[i] - '0';
		j++;
	}
	for(i=0; i<=M; i++){
		num1[i] = num1[i]+num2[i];
		if(num1[i]>9)
		{
			num1[i] = num1[i]-10;
			num1[i+1]++;
		}
	}
	for(i=M-1; i>=0&&num1[i]==0; i--);
	if(i>0){
		for(; i>=0; i--){
			printf("%d", num1[i]);
		}
	}
	else
		printf("0");
	return 0;
}
