#include <stdio.h>
#include <string.h>
int daoxu(char str[])                     //?????
{
	int n = strlen(str);
	char str1[n + 1];
	for(int i = 0; i < n; i++)
		str1[n - 1 - i] = str[i];
	for(int i = 0; i < n; i++)
		str[i] = str1[i];
}
int unequal(char  num[], char sum[], int n2, int n)         // ???????????
{
	for(int i = n2; i < n; i++)
	{
		sum[i] += num[i];
		if(sum[i] >= 58)
		{
			sum[i] -= 10;
			sum[i + 1] = 1;
		}
	}
}
int main()
{
	char num1[1000], num2[1000], sum[1000] = {'\0'};
	gets(num1);
	gets(num2);
	int n = strlen(num1), n2 = strlen(num2);
	daoxu(num1);
	daoxu(num2);

    if(n2 < n)
		n = n2;
	for(int i = 0; i < n; i++)
	{
		int temp = num1[i] + num2[i] - '0';
		sum[i] += temp;
		if(sum[i] >= 58)
		{
			sum[i + 1] += 1;
			sum[i] -= 10;
		}
	}
	n = strlen(num1);
	if(n > n2)
	{
		unequal(num1, sum, n2, n);
		if(sum[n] == 1)
			sum[n] += '0';
	}
	else if(n < n2)
	{
		unequal(num2, sum, n, n2);
		if(sum[n2] == 1)
			sum[n2] += '0';
	}
	else
	{
	    if(sum[n] == 1)
            sum[n] += '0';
	}
   daoxu(sum);
	puts(sum);
	return 0;
}