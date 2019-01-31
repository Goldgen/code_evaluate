#include<stdio.h>
#include<string.h>
int main()
{
    char sen1[1000]={0};
    int i,j,k,l;
    int n=0;
    int m=0;
    char sen2[1000]={0};
    char sen3[1000]={0};
    for(i=0;i<1000;++i)
    {
    sen1[i]=getchar();
    if(sen1[i]!=' ')
    {
    ++n;
    }
    else
    {
    sen1[i]='\0';
    break;
    }
    }
    gets(sen3);
    for(i=0;i<n;++i)
    {
    l=0;
    for(j=i;j<n;++j)
    {
    sen2[l]=sen1[j];
    ++l;
    }
    for(k=0;k<i;++k)
    {
    sen2[l]=sen1[k];
    ++l;
    }
    sen2[l]='\0';
    if(strcmp(sen2,sen3)==0)
    {
    m=1;
    break;
    }
    }
    if(m==0)
    {
    printf("\"%s\" is NOT a rotation of \"%s\"",sen1,sen3);
    }
    else
    {
    printf("\"%s\" is a rotation of \"%s\"",sen1,sen3);
    }
    return 0;
}