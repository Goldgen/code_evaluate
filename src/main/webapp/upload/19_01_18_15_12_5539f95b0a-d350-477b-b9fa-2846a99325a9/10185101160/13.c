#include <stdio.h>
#include <string.h> 
int main()
{   int  a,b,c;
    char *str[13]={"","January","February","March",
	               "April","May","June","July","August",
				   "September","October","November",
				   "December"}; //??12?????????? 
    scanf ("%d%d%d",&a,&b,&c);  //?? ? ? ? 
    	if(b!=11&&b%10==1)      //??????1???21? 
		    {printf("%dst %s %d",b,str[a],c);}
    	else if(b!=12&&b%10==2) //??????2???22? 
      	    {printf("%dnd %s %d",b,str[a],c);}
        else if(b!=13&&b%10==3) //??????3???23? 
    	    {printf("%drd %s %d",b,str[a],c);}
		else
			printf("%dth %s %d",b,str[a],c);
    	return 0;
}
 