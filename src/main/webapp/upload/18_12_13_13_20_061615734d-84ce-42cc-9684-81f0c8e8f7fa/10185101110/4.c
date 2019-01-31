#include<stdio.h>
void a(char* p);
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char arr[n][11];
	
	for(int i=0;i<n;i++)
	{
		gets(arr[i]);
		a(&arr[i][0]);
		printf("case #%d: %s",i,arr[i]);
		if(i!=n-1)
		printf("\n");
		
	}
	return 0;
	
}
void a(char* p)
{
	while(*p!='\0')
	{
		*p+=1;
		p++;
	}
}