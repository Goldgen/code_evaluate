#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char Str[100]={'\0'};
    char a[100]={'\0'};
    int s[100]={0};
    int i,j,p=0,F=1;
    gets(Str);
    while(i<strlen(Str))
    {
        i=0;
        F=0;
        if(isgraph(Str[i]))
        {
            F= 1;
            for(j=0;j<=p-1;j++)
                if(Str[i]==a[j])
                {   s[j]++;
                    F=0;
                }
        }
        if(F)
        {   a[p]=Str[i];
            s[p]++;
            p++;
        }
        i++;
	}
    while(i<=p-1)
    {
        i=0;
        printf("%c %d; ",a[i],s[i]);
        i++;
    }
}
