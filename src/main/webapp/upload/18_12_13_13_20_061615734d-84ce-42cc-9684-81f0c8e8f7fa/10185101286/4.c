#include<stdio.h>
#include<string.h>
int main()
{
    int T,i,j;
    char sen[10][100]={0};
    char sen2[10][100]={0};
    scanf("%d",&T);
    while(gets(sen[0])==0);
    for(i=0;i<T;++i)
    {
    gets(sen[i]);
    }
    for(i=0;i<T;++i)
    {
    for(j=0;j<100;++j)
    {
    if(sen[i][j]=='\0')
    {
    break;
    }
    if(sen[i][j]=='Z')
    {
    sen2[i][j]='A';
    }
    else
    {
    sen2[i][j]=sen[i][j]+1;
    }
    }
    }
    for(i=0;i<T-1;++i)
    {
    printf("case #%d: %s\n",i,sen2[i]);    
    }
    printf("case #%d: %s",T-1,sen2[T-1]);
    return 0;
}