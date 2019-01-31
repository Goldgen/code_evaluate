#include<stdio.h>
#include<stdlib.h>

int main()
{
   int n,i;
   scanf("%d",&n);
   int data[n];
   for(i=0;i<n;i++)
    scanf("%d",&data[i]);
    int key,m;
    int r[n+1];
    scanf("%d %d",&m,&key);
    int j,k;
    for(j=0;j<m;j++)
        r[j]=data[j];
    r[m]=key;
    for(k=m;k<n;k++)
        r[k+1]=data[k];
    int l;
    for(l=0;l<n+1;l++)
    {
        printf("%d",r[l]);
        if(l<n)printf(" ");
    }
	return 0;
}
