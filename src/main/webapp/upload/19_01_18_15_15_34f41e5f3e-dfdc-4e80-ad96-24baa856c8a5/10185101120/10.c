#include<stdio.h>
int main()
{
	int n;
	scanf ("%d",&n);
	int v,s,a;
	s=(1<<n);
	for (v=0;v<s;v++)
	{
		printf ("{");
		for (a=0;a<n;a++)
		{
			if ((v>>a)%2==1)
			{
				printf ("%d",a);
			    if ((v>>a)>1)
			    {
				    printf (",");
			    }
			}
		}
		printf ("}");
		if (v<s-1)
		{
			printf ("\n");
		}
	}
}