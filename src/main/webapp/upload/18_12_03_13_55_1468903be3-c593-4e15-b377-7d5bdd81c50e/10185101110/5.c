#include<stdio.h> 

int main()
{
	char arr[100]={ },brr[100]={ },a;
	int lena=0;
	for(int i=0;i<80;i++)
	{
		a=getchar();
		if(a==' ') 
		break;
		else
		arr[i]=a;
		lena++;

	}
	for(int i=0;i<80;i++)
	{
		a=getchar();
		if(a=='\n') 
		break;
		else
		brr[i]=a;
	
	}

	int i=0,j=0,flag=0;
	int q=0;
	for(;i<lena;i++)
	{if(arr[i]==brr[j])
	{
		for(q=0;q<lena;q++){
	
	
		if(arr[(i+q)%lena]!=brr[j+q])
		break;
		}
		if(q==lena	)
		flag=1;
		
	} }

	if(flag==0)
		printf("\"%s\" is NOT a rotation of \"%s\"",arr,brr);
		else
		printf("\"%s\" is a rotation of \"%s\"",arr,brr);
		
	

	return 0;
}