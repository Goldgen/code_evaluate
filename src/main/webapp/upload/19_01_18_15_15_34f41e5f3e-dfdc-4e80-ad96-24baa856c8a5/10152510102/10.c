#include <stdio.h>
#include <math.h>
int main()  
{
	int n,m,i,j,k,x;
    scanf("%d",&n);  
    m=1;
	int a[11];
	m=pow(2,n)-1;
    for (i=0;i<=m;i++)
    {
		int k,end;
		memset(a,0,sizeof(a));
		printf("{");  
        j=i;
        k=0;
        while(j!=0)  
        {  
            if (j%2==1)
			{
				a[k]=1;
				end=k;
			}
            k++;
            j/=2;
        }
		for(x=0;x<=n;x++)
		if(a[x]==1)
		{
			if(x!=end)
				printf("%d,",x);
			else
				printf("%d",x);
		}
		if(i!=m)
        printf("}\n");  
		else
		printf("}");
    }  
	return 0;
}