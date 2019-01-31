#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,a,b;
    int k=0;
    int l=0;
    scanf("%d",&n);
    char psen[100]={0};
    char sts[10][100]={0};
    char word[100][100]={0};
    char c;
    c=getchar();
    for(i=0;i<n;++i)
    {
        gets(sts[i]);
    }
    for(i=0;i<n-1;++i)
    {
        for(j=0;j<100;++j)
        {
            word[k][l]=sts[i][j];
            ++l;
            if(sts[i][j]==' '||sts[i][j]=='\0')
            {
                word[k][l-1]='\0';
                ++k;
                l=0;
                //printf("%s",word[k-1]);
            }
            if(sts[i][j]=='\0')
            {
                break;
            }
        }
        for(a=0;a<k;++a)
        {
            for(b=0;b<k-1-a;++b)
            {
                if(strcmp(word[b],word[b+1])>0)
                {
                    strcpy(psen,word[b]);
                    strcpy(word[b],word[b+1]);
                    strcpy(word[b+1],psen);
                }
            }
        }
        printf("case #%d:\n",i);
        for(a=0;a<k-1;a++)
        {
            printf("%s ",word[a]);
        }
        printf("%s\n",word[k-1]);
        k=0;
        l=0;
    }
    for(j=0;j<100;++j)
        {
            word[k][l]=sts[n-1][j];
            ++l;
            if(sts[n-1][j]==' '||sts[n-1][j]=='\0')
            {
                word[k][l-1]='\0';
                ++k;
                l=0;
                //printf("%s",word[k-1]);
            }
            if(sts[n-1][j]=='\0')
            {
                break;
            }
        }
        for(a=0;a<k;++a)
        {
            for(b=0;b<k-1-a;++b)
            {
                if(strcmp(word[b],word[b+1])>0)
                {
                    strcpy(psen,word[b]);
                    strcpy(word[b],word[b+1]);
                    strcpy(word[b+1],psen);
                }
            }
        }
        printf("case #%d:\n",i);
        for(a=0;a<k-1;a++)
        {
            printf("%s ",word[a]);
        }
        printf("%s",word[k-1]);
    return 0;
}
