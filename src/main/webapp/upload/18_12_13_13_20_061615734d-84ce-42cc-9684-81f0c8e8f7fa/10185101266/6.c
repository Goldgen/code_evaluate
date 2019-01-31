#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,s;
    scanf("%d %d",&n,&m);
	int num[n],temp[n];
    for(s=0;s<n;s++)
        scanf("%d",&num[s]);
    for(s=m;s<n;s++)
        temp[s]=num[s-m];
    for(s=0;s<m;s++)
        temp[s]=num[n-m+s];
    for(s=0;s<n-1;s++)
        printf("%d ",temp[s]);
    printf("%d",temp[n-1]);
}
