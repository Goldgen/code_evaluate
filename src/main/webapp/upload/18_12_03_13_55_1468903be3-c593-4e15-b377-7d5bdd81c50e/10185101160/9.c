#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str[81],arr[81];
	int len2;
	int j=0,n=0,flag=100;
 	gets(str);
  	gets(arr);
  	len2 = strlen(arr);
 	for(j=0; str[j] != '\0';j++)
 	{
  		if(strncmp(&str[j], arr, len2) == 0)
  		{
  			if(j<flag)
			  flag = j;
			n++;
		}  
 	}
 	if(n>0)
 		printf("%s: %d time(s), first at %d",arr,n,flag);
 	else
 		printf("%s: %d time(s), first at -1",arr,n);
 	return 0;
}