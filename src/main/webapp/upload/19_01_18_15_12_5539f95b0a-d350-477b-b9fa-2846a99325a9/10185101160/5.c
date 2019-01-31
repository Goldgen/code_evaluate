#include <stdio.h>
int main()
{
	int a[8],s[8];
	int i=0;
	int j=0;
	int sum1=0;
	int sum2=0;
	for(i=0;i<8;i++)
	scanf("%d",&a[i]);
	for(i=0;i<8;i++)
	sum1+=a[i];
	printf("%d\n",sum1);
	for(j=0;j<8;j++)
{
	if (j==2||j==5||j==7)
	scanf("%d",&s[j]);
	else
	scanf ("%d,",&s[j]);
}
for(j=0;j<8;j++)
sum2+=s[j];
printf("%d",sum2);
return 0;
}