#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int hex2int(int s[],int len)
{
    int num=0,i,a=1;
    for(i=0;i<len;++i)
    {
        a=pow(16,i);
       num=num+s[i]*a;
    }
    return num;
}

void main()
{
    char k[100];
    int i,len,num,s[100];
    scanf("%s",k);
    len=strlen(k);
    for(i=0;i<len;++i)
    {
        if(k[i]>='0'&&k[i]<='9')
            s[len-i-1]=k[i]-48;
        else if(k[i]>='A'&&k[i]<='F')
            s[len-i-1]=k[i]-55;
        else if(k[i]>='a'&&k[i]<='f')
            s[len-i-1]=k[i]-87;
    }
    num=hex2int(s,len);
        printf("%d",num);
	
}