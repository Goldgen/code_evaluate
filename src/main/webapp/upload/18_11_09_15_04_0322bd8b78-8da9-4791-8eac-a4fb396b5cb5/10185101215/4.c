#include<stdio.h>
int main()
{
  long long int i,n,sum=1;
  scanf("%ld",&n);
	if(i==0)
		printf("1");
  for(i=1;i<=n;i++)
    sum*=i;
    printf("%d",sum%20181111);
    return 0;
}
