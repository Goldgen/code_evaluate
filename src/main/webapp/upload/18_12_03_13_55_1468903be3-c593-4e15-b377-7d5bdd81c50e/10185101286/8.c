#include<stdio.h>
#include<string.h>
int main()
{
    char sen1[1000]={0};
    int i;
    int n=0;
    char sen2[1000]={0};
    for(i=0;i<1000;++i)
    {
    sen1[i]=getchar();
    if(sen1[i]!='\n')
    {
    ++n;
    }
    else
    {
    sen1[i]='\0';
    break;
    }
    }
    for(i=0;i<n;++i)
    {
    sen2[i]=sen1[n-1-i];
    }
    sen2[n]='\0';
    if(strcmp(sen1,sen2)==0)
    {
    printf("True");
    }
    else
    {
    printf("False");
    }
    return 0;
}