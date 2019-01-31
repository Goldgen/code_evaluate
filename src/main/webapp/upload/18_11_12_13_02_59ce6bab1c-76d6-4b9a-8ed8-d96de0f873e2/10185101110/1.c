#include<stdio.h>
int x(int a,int b)
{
	int c=a*b;
	printf(" %d * %d =%3d",a,b,c);

}
int main() 
{
	int n,i,j;
	scanf("%d",&n);
	 for(i=1;i<=n;i++)
	  {
	  for(j=1;j<=i;j++)
	    x(j,i);
	    if(i!=n)
	    printf("\n");
	  }
	    
	  return 0;
}