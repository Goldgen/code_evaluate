#include<stdio.h>
#include<string.h>
#define M 20
void main()
{ 	char str1[M],str2[M],newstr[2*M];
	int chang1,chang2,i,flag,j;
	int low,high;
	scanf("%s",str1);
	scanf("%s",str2);
	chang1=strlen(str1);
	chang2=strlen(str2);
	if(chang1<chang2)
        {
            low=chang1;
            high=chang2;
            flag=1;	}
    else
        {
            low=chang2;
            high=chang1;
            flag=0;	}
    for(i=0;i<low;i++)
        {
            newstr[2*i]=str1[i];
            newstr[2*i+1]=str2[i];  	}
    for(i=low,j=2*i;i<high;i++)
    {
            if(flag)
                newstr[j++]=str2[i];
            else
                newstr[j++]=str1[i]; 	}
    newstr[low+high]='\0';
    puts(newstr);
    }
