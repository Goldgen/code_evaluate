#include <stdio.h>

int main(){
    int t,num,c=1,max=1;
    scanf("%d",&t);
    int arr[t];
    for (int i=0;i<t;i++)
	{
		scanf("%d",&num);
		arr[i]=num;
	}
	for (int i=0;i<t;i++)
	{
		if (arr[i]==arr[i+1])
		c++;
		else
		{
		  max=(c>max)?c:max;
		  c=1;
	    }
	}
    printf("%d",max);
    return 0;
}