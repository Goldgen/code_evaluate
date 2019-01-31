#include <stdio.h>

int main()
{
	int t=0;
	scanf("%d",&t);
	int arr[t],temp;
	for(int i=0;i<t;i++)
		scanf("%d",&arr[i]);
	for(int a=0;a<t;a++)
    {
        for(int b=0;b<t-a-1;b++)
        {
            if(arr[b]>arr[b+1])
            {
                temp=arr[b];
                arr[b]=arr[b+1];
                arr[b+1]=temp;
            }
        }
    }
	for(int i=0;i<t;i++){
		if(i==0)
			printf("%d",arr[i]);
		else
			printf(" %d",arr[i]);
	}
	return 0;
	
}