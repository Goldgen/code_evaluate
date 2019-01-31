#include<stdio.h>
#include<string.h>
int main()
{
    char sen[100][100]={0};
    char word[100][100]={0};
    char word1[100];
    int amt=0;
    int am=0;
    int a,m,i,j,k,l;
    for(i=0;i<1000;++i)
    {
        scanf("%s",sen[i]);
        if(sen[i][0]=='#')
        {
            sen[i][0]='\0';
            break;
        }
        scanf("%s",word[i]);
    }
    for(j=0;j<i;++j)
    {
        for(m=0;m<100;++m)
        {
            if(sen[j][m]=='\0')
            {
                break;
            }
        }
        for(k=0;k<100;++k)
        {
            if(word[j][k]=='\0')
            {
                break;
            }
        }
        for(a=0;a<100;a++)
        {
            amt+=a*k;
            for(l=0;l<k;++l)
        {
            word1[l]=sen[j][amt+l];
        }
        if(strcmp(word1,word[j])==0)
        {
            am+=1;
        }
        if(amt>m)
        {
            break;
        }
        }
        printf("%d\n",am);
    }
    return 0;
}

