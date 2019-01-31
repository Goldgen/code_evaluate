#include <stdio.h>

int main(){
    int t,num,a,count=0,k=0;
    scanf("%d",&t);
    int arr[t];
    for (int i=0;i<t;i++)
	{
		scanf("%d",&num);
		arr[i]=num;
	}
	scanf("%d",&a);
	
	for (int i=0;i<t;i++)
	{
		if (arr[i]==a)
		count++;
	} 
	if (count)
    {
		for (int i=0;i<t;i++)
		{
			if ((arr[i]==a)&&(!k)){
			printf("%d",i);
			k++;
			continue;
		    }
		    if ((arr[i]==a)&&(k))
		    printf(" %d",i);
		    
		}
	}
	else
	printf("ERROR");
    return 0;
}