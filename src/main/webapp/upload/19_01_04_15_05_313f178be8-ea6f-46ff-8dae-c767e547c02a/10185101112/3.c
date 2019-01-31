#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[1010];
    char B[1010];
    int i,j;
    scanf("%s",A);
    while (A[0]!='#')
    {
	    int count=0,k=0;
    	scanf("%s",B);
    	for(i=0;i<strlen(A);i++)
    	{
    		if(A[i]==B[0])
    		{
    			for(j=1;j<strlen(B);j++)
    			{
    				if(A[i+j]!=B[j])
    				k++;
				}
				if(!k)
				count++;
				if(count)
                    i=i+strlen(B)-1;
                k=0;
			}
		}
		printf("%d\n",count);
    	scanf("%s",A);
	}
    return 0;
}
