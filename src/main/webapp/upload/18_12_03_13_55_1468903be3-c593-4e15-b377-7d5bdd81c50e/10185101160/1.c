#include<stdio.h>
#include<string.h>
int main()
{
	char str[81];
	int i,j,k;
	char basic[9][4] ={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
	gets(str);
	for(i=0;i<8;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<4;k++)
			{
				if(str[i] == basic[j][k])
					printf("%d",j+2);
			}
		}
	}
	return 0;
}
