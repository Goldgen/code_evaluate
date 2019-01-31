#include<stdio.h>  
#include<string.h>  
#include<math.h>
#include<ctype.h>
char str[10];  
int i=0,len=0,num=0;  
long long ans = 0;
void turn()
{
	switch(str[i])//??????? 
		{  
        	case 'A': num = 10; break;  
        	case 'B': num = 11; break;  
       	 	case 'C': num = 12; break;  
        	case 'D': num = 13; break;  
        	case 'E': num = 14; break;  
        	case 'F': num = 15; break;  
        	default:  num = str[i]-'0'; break;  
    	}  
} 
int main()
{  
      
    gets(str);  
    len = strlen(str);//16?????  
    for (i=0; str[i] != '\0'; i++)
	{  
		if(islower(str[i]))//????? 
			str[i] += 'A'-'a';
    		turn();
         ans += (num*pow(16,len-1-i));//??????  
     }  
     printf("%lld",ans);  
     return 0;  
 }
