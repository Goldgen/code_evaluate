#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int t;
	scanf("%d",&t);
	char arr[200][20];
	char c;
    int a=0;
	while(a!=t)
	{
		int k;
		for (k=0;c!='\n';k++)
		{
			scanf("%s",arr[k]);
		    c=getchar();
		}

	char temp[100];
	for (int i=0;i<k-1;i++)
	{
		for (int j=0;j<k-i-1;j++)
		{
		int count1=0,count2=0;
		for (int y=0;arr[j][y]!='\0';y++)
		{
		    if (!isalpha(arr[j][y]))
			count1++;	//不含字符为0 
		}
		
		for (int y=0;arr[j+1][y]!='\0';y++)
		{
		    if (!isalpha(arr[j+1][y]))
			count2++;	
		}
		
		if((count1==0)&&(count2!=0)) 
		{
		    if (strcmp(arr[j],arr[j+2])>0)
         {
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+2]);
            strcpy(arr[j+2],temp);
         }	
		}
		
	    if((count1!=0)&&(count2!=0))
	    continue;
	    
	    if((count1==0)&&(count2==0))
		{
		
        if (strcmp(arr[j],arr[j+1])>0)
        {
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
        }
        }
		}
    }
    
    
    	printf("case #%d:\n",a);
    	printf("%s",arr[0]);
    	for(int j=1;j<k;j++)
    	printf(" %s",arr[j]);
    	printf("\n");
    	a++;
    	c='1';
	}
	return 0;
}