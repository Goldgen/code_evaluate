#include <stdio.h>
#include <string.h>


int main()
{
    int n,i,max=0;
	char temp[40]={'\0'};
    scanf("%d",&n);
    char c[n][40];
    getchar();
    for(i=0;i<n;i++)
        gets(c[i]);
    for(int j=0;j<n;j++){
	
    for(i=0;i<n-1;i++)
    {
    	if(strcmp(c[i],c[i+1])<0)
    	{
		strcpy(temp,c[i+1]);
    strcpy(c[i+1],c[i]);
    strcpy(c[i],temp);}
    	
	}}
	
	for(i=0;i<n;i++)
	{
		if(i==n-1)
		printf("%s",c[i]);
		else 
		printf("%s\n",c[i]);
	}

    return 0;
}
