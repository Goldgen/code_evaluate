#include <stdio.h>
int arr1[1000]={0},arr2[1000]={0};
int arr3[1000]={0},arr4[1000]={0};


int main(){
	char c,d;
	int i=0,j=0,max;
	while((c=getchar())!='\n')
	{
		arr1[i]=(int)(c-'0');
		i++;
    }
	while((d=getchar())!='\n')
	{
		arr2[j]=(int)(d-'0');
		j++;
    }
    max=(i>j)?i:j;
    
    arr3[0]=arr1[i-1]+arr2[j-1];
    if (arr3[0]>9)
	{
    arr3[0]=arr3[0]-10;
    arr4[0]=1;
    }
    int k;
    for (k=1;k<max;k++)
    {
    	arr3[k]=arr1[i-1-k]+arr2[j-1-k]+arr4[k-1];
    	if (arr3[k]>9)
		{
    	arr3[k]=arr3[k]-10;
    	arr4[k]=1;
        }
	}
	if(arr4[k-1]==1)
	printf("1");
	for (int k=max-1;k>=0;k--)
	{
		printf("%d",arr3[k]);
	}
    return 0;
} 