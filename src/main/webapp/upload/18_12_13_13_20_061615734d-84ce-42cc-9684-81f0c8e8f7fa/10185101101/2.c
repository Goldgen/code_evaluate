#include <stdio.h>
#include <stdlib.h>
char* strmcry(char* str1,int n){
    int i=0;
    while(*(str1+n+i) != '\0')
    {*(str1+i) = *(str1+n+i);
        ++i;
    }
    *(str1+i)='\0';
    return str1;
}

int main()
{
    char string[1000];
    int m=0;
    gets(string);
    scanf("%d",&m);
    printf("%s",strmcry(string,m));
    return 0;
}
