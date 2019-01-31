#include<stdio.h>
int n,a[10010];

int find(int x)
{
	int i;
	for(i=0;i<n;i++)
		if(a[i]==x) return i;
	return -1;
}

int main()
{
    int i,x,k;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    	scanf("%d",&a[i]);
    scanf("%d",&x);
    
    k=find(x);
    if(k==-1) printf("ERROR");
    else if(k==0)
    	{
    	printf("%d",a[1]);
    	for(i=2;i<n;i++)
    	printf(" %d",a[i]);
		}
    else
	{
		printf("%d",a[0]);
		for(i=1;i<n;i++)
			if(i!=k) printf(" %d",a[i]);
	}
    return 0;
}
