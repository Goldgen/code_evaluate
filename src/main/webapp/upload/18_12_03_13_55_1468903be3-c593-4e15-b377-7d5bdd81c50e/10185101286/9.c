#include<stdio.h>
#include<string.h>
int main()
{
    char sen[80]={0};
    char word1[80]={0};
    char word2[80]={0};
    int i,j,k,l;
    int n=0;
    int m=0;
    int amount=0;
    int address=0;
    for(i=0;i<1000;++i)
    {
    sen[i]=getchar();
    if(sen[i]!='\n')
    {
    ++n;
    }
    else
    {
    sen[i]='\0';
    break;
    }
    }
    for(i=0;i<1000;++i)
    {
    word1[i]=getchar();
    if(word1[i]!='\n')
    {
    ++m;
    }
    else
    {
    word1[i]='\0';
    break;
    }
    }
    for(i=0;i<n;++i)
    {
        l=0;
        for(j=i;j<i+m;++j)
        {
            word2[l]=sen[j];
            ++l;
        }
        if(strcmp(word1,word2)==0)
        {
            ++amount;
            if(amount==1)
            {
                address=i;
            }
        }
    }
    if(amount==0)
    {
        address=-1;
    }
    printf("%s: %d time(s), first at %d",word1,amount,address);
}
