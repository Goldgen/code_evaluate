#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,n,max;
    char a[10000];
    char b[10000];
    char c[10000];
    scanf("%s %s",a,b);
    i=strlen(a);
    j=strlen(b);
    if(i<=j)
    {
    	max=j;
    	for(n=0;n<j-i;n++)
    	    c[n]='0';
		for(n=j-i;n<j;n++)
		    c[n]=a[n+i-j];
		for(n=max-1;n>=0;n--)
		{
		    c[n]=c[n]+b[n]-48;
            if(c[n]>9+48)
            {
		       if(n==0)
                   printf("1");
        	   c[n]-=10;
        	   c[n-1]+=1;
		    }
		}
    }
    else
    {
    	max=i;
    	for(n=0;n<i-j;n++)
    		c[n]='0';
		for(n=i-j;n<i;n++)
			c[n]=b[n+j-i];
        for(n=max-1;n>=0;n--)
        {
        	c[n]=c[n]+a[n]-48;
            if(c[n]>9+48)
           {
		        if(n==0)
                   printf("1");
        	    c[n]-=10;
        	    c[n-1]+=1;
		   }
		}
    }
	c[max]='\0';
    printf("%s",c);
    return 0;
}
