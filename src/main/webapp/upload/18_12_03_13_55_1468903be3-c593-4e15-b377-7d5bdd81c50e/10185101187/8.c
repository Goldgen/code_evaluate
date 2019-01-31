#include <stdio.h>

int main()
{
    int i, k=0;
    char str1[100];
    gets(str1);
    int a=strlen(str1);
    char str2[100];
    
	for(i=0; i<a; ++i)
    {
        str2[i]=str1[a-i-1];
    }
    for(i=0; i<a; ++i)
    {
        if(str1[i]!=str2[i])
            k=1;
    }
    if(k==1)
        printf("False");
    else
        printf("True");
}
