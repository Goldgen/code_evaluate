#include <stdio.h>
#include <string.h>
char str[100];
int wl[100],nl[100];

int main(){
	gets(str);
	int j=0,max=0,flag=0;
	for (int i=0;i<100;i++)
	{
		if ((str[i]==' ')||(str[i]==0))
		{
			nl[j]=i-1;
			if (j==0)
			wl[j]=nl[j]+1;
			else
			wl[j]=nl[j]-nl[j-1]-1;
			
			j++;
		}
		if (str[i]==0)
		break;
	}

	if(j==0)
	{
		for (int k=0;k<nl[0]+1;k++)
		putchar(str[k]);
	}
	else
	{
	for (int k=0;k<j;k++)
	{
		if(wl[k]>max)
		{
			max=wl[k];
			flag=k;
		}
	}
	for (int k=nl[flag]-max+1;k<nl[flag]+1;k++)
	{
		putchar(str[k]);
	}
}
    return 0;
} 

