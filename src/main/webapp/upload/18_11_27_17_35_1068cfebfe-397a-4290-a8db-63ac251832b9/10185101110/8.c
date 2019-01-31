#include <stdio.h>
int arr[10000];
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 0 ; i < n ; ++i)
		scanf("%d",arr+i);
	int len = 0;
	int ans = 0;
	int pre = -123123125;
	for (int i = 0 ; i < n ; ++i)
	{
		if(arr[i] == pre)
		{
			len++;

		}
		else 
		{
					pre = arr[i];
			if(ans < len) ans = len;
			len = 1;}	
		

	}
	if(ans  < len ) ans = len;
	printf("%d\n",ans);
	return 0;
}