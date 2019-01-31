#include <stdio.h>
#include <string.h>

int main()
{   
	char str[81]={'\0'};
	char b[81]={'\0'};
	char max[81]={'\0'};
    int i=0,j=0,a=0;
	int long1,more=0;
     gets(str);
    long1=strlen(str);
    for(i=0;i<long1;i++)
    {
        if(str[i]==' ')
        {   if(more<j)
            {  
			strcpy(max,b);
                more=j;
            }
            j=0;
            a++;
        }
        else
        {   b[j]=str[i];
            j++;
        }
    }
    if(more<j)
        strcpy(max,b);
    if(a==0)
        strcpy(max,str);
    puts(max);
    return 0;
}