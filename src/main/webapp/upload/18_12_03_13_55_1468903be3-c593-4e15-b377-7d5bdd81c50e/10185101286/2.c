#include<stdio.h>
#include<string.h>
int main()
{
    char juzi[15][31];
    char juzi2[60];
    int shu[31]={0};
    char a;
    int m=0;
    int n=0;
    int i,j,l,k;
    scanf("%d",&n);
    while((a=getchar())!='\n')
    {

    }
    for(i=0;i<n;++i)
    {
        gets(juzi[i]);
    }
    k=n-1;
    for(j=n-1;j>=1;j--)
    {
        for(l=0;l<j;++l)
        {
            if(strcmp(juzi[l],juzi[l+1])>0)
            {
                strcpy(juzi2,juzi[l]);
                strcpy(juzi[l],juzi[l+1]);
                strcpy(juzi[l+1],juzi2);
            }

        }
    }
    for(j=n-1;j>=0;--j)
    {
        printf("%s\n",juzi[j]);
    }
    return 0;
}
