#include<stdio.h>

int main()
{
	char a[100];
	int i,j,l[100];
	scanf("%s",a);
	j = strlen(a);
	for(i=1;i<=j;i++)
	{
	
			if(a[i-1]=='a'||a[i-1]=='b'||a[i-1]=='c')
				l[i-1]=2;
			else if(a[i-1]== 'd'||a[i-1]=='e'||a[i-1]=='f')
				l[i-1]=3;
				
			else if(a[i-1]== 'g'||a[i-1]=='h'||a[i-1]=='i')
				l[i-1]=4;
				
			else if(a[i-1]==  'j'||a[i-1]=='k'||a[i-1]=='l')
				l[i-1]=5;
						
			else if(a[i-1]==  'm'||a[i-1]=='n'||a[i-1]=='o')
				l[i-1]=6;
						
			else if(a[i-1]==  'p'||a[i-1]=='q'||a[i-1]=='r'||a[i-1]=='s')
				l[i-1]=7;
			
			else if(a[i-1]==  't'||a[i-1]=='u'||a[i-1]=='v')
				l[i-1]=8;
			else
				l[i-1]=9;
										
									
	}
	int k=8;
	if(j<k)
	k=j;
	for(i=0;i<k;i++)
	{
		printf("%d",l[i]);
	}
	return 0;
 } 