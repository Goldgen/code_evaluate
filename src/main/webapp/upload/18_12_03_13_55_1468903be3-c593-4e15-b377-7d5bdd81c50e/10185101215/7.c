#include<stdio.h>
#include<string.h>
int main()
{
   char a[81];
   gets(a);
   int i,str,len=0,length=0,flag;
    str=strlen(a);
    for(i=0;i<=str;i++)
    {
        if(a[i]!=' '&&a[i]!='\0')
        ++len;
        else
        {
            if(len>length)
			{
                length=len;
                flag=i-length;
            }
                 len=0;
        }
    }
    for(i=flag;i<flag+length;i++)
   printf("%c",a[i]);
   return 0;
}