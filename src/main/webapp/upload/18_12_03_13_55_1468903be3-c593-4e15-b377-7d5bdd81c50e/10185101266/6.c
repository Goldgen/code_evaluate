#include<stdio.h>
#include<math.h>
#include<string.h>
long long hex2int(char*num)
{
	long long sum=0,len=strlen(num),i;
	for(i=0;i<len;i++)
	{
		if(num[i]>96)
			num[i]-=87;
		else if(num[i]>64)
			num[i]-=55;
		else
		    num[i]-=48;
		sum+=num[i]*pow(16,len-i-1);
	}
  		return sum;
}
int main()
{
	char num[9];
	gets(num);
	printf("%lld",hex2int(num));
}
