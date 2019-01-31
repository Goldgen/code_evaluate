#include <stdio.h>
void strmcpy(char sen[],int m)
{
    int i=0;
    char t[100];
    while(sen[m+i-1]!='\0')
    {
        t[i]=sen[m+i];
        i++;
    }
    printf("%s",t);
}

int main()
{
    int m;
    char normal[100];
    gets(normal);
    scanf("%d",&m);
    strmcpy(normal,m);
    return 0;
}
