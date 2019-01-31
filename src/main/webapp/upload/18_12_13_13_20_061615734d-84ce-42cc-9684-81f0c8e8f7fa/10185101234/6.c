#include <stdio.h>
#include <stdlib.h>

void rotate(int* p,int n,int m)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=temp;
    }
    for(i=0;i<m/2;i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+m-1-i);
        *(p+m-1-i)=temp;
    }
    for(i=0;i<(n-m)/2;i++)
    {
        temp=*(p+m+i);
        *(p+m+i)=*(p+n-1-i);
        *(p+n-1-i)=temp;
    }
}
int main()
{
    int a,b,*c,i;
    scanf("%d",&a);
    scanf("%d",&b);
    int arr[100];
    for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
    c=arr;
    rotate(c,a,b);
    for(i=0;i<a;i++)
	{
        printf("%d",arr[i]);
		if(i<a-1) printf(" ");
	}
}
