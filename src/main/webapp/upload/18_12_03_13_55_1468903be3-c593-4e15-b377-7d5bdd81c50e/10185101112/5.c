#include <stdio.h>
#include <string.h>
char str1[100],str2[100],str3[100];

int main(){
    scanf("%s",str1);
    scanf("%s",str2);
    int l=strlen(str2);
    for (int i=0;i<l;i++)
    {
    	int k=0;
    	for (int j=i;j<l;j++)
    	{
    		str3[k]=str2[j];
    		k++;
		}
		for (int j=0;j<i;j++)
		{
			str3[k]=str2[j];
    		k++;
		}
		if (strcmp(str3,str1)==0)
		{
			printf("\"%s\" is a rotation of \"%s\"",str1,str2);
			return 0;
		}
	}
	printf("\"%s\" is NOT a rotation of \"%s\"",str1,str2);
	return 0;
} 