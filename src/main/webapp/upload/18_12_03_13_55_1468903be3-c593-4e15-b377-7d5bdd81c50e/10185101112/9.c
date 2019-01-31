#include <stdio.h>
#include <string.h>
char st[100];
char key[100]; 

int main(){
	gets(st);
    gets(key);
    int l_st=strlen(st);
	int l_key=strlen(key);
	int t=0,first;
    for (int i=0;i<l_st;i++)
	{
		int k=0;
		for (int j=0;j<l_key;j++)
		{
			if (st[i+j]!=key[j])
            k++;
		}
		if (k)
		continue;
		
		t++;
		if (t==1)
		first=i;
	}
	if(t==0)
	first= -1;
	
	printf("%s: %d time(s), first at %d",key,t,first); 
	return 0;
} 