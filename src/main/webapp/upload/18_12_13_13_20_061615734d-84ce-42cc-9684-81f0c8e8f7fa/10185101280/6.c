#include <stdio.h>
#include <stdlib.h>
void move(int *arry1,int *arry2,int n,int m)
{   
	int j,x;

    for(j=0;j<m;j++)
        arry2[j]=arry1[j+n-m];
    for(x=0;x<n-m;x++)
        arry2[x+m]=arry1[x];
}
int main()
{  
	int n,m,i;
    scanf("%d %d",&n,&m);
    int arry1[n],arry2[n];
    for(i=0;i<n;i++)
       scanf("%d",&arry1[i]);
    move(arry1,arry2,n,m);
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("%d",arry2[i]);
        else
            printf(" %d",arry2[i]);
    }
    return 0;
}