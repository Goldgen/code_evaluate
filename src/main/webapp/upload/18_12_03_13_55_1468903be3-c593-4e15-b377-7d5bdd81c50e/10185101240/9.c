#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char lon[100],s[100];
void main()
{
	char lon[100],s[100];
    int i,j,x,y,count=0,m=0;
    gets(lon);
    scanf("%s",s);
    x=strlen(lon);
    y=strlen(s);
    char temp[100];
	int a[100];
    for(i=0;i<x;i++)
    {
        if(s[0]==lon[i])
        {
            for(j=0;j<y;j++)
            {
                temp[j]=lon[i+j];
            }
            if(strcmp(s,temp)==0) 
			{count+=1;
			   a[m]=i;
			   m++;}
        }
    }
   /* int A[count];
    for(m=0;m<count;m++)
    {
        for(i=0;i<x;i++)
        {
            if(s[0]==lon[i])
            {
                for(j=0;j<y;j++)
                {
                    temp[j]=lon[i+j];
                }
                if(strcmp(s,temp)==0)
                {
                        A[m]=i;
                       break; 
                }
            }
        }
    }*/
    if(count==0) 
		printf("%s: %d time(s), first at -1",s,count);
    else 
		printf("%s: %d time(s), first at %d",s,count,a[0]);
    return 0;
}
