#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100];
    scanf("%s%s",s1,s2);
    int i,m,j;
    if(strlen(s1)>=strlen(s2))
{      m=strlen(s2);
       for(i=0;i<=m-1;i++)
    {
        printf("%c%c",s1[i],s2[i]);
    }
    for(j=m;j<strlen(s1);j++)
    {
        printf("%c",s1[j]);
       }
 printf("\n");
}
    else
    {
        m=strlen(s1);
    for(i=0;i<=m-1;i++)
    {
        printf("%c%c",s1[i],s2[i]);
    }
    for(j=m;j<strlen(s2);j++)
    {
        printf("%c",s2[j]);

    }
		printf("\n");
    }



	return 0;
}
