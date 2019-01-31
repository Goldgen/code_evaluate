#include<stdio.h>
#include<string.h>
int main()
{
    char sen[1000]={0};
    int i,j,k,m,amt=0;
    int act=0;
    char c;
    c=getchar();
    for(i=0;i<1000;++i)
    {
        if(c!='\n')
        {
            sen[i]=c;
            c=getchar();
        }
        else
        {
            break;
        }
    }
    for(j=0;j<i;++j)
    {
        if(sen[j]!=' ')
        {
            for(k=0;k<j;++k)
        {
            if(sen[k]==sen[j])
            {
                act=1;
                break;
            }
        }
        if(act==0)
            {
                for(m=0;m<i;++m)
                {
                    if(sen[m]==sen[j])
                    {
                        amt+=1;
                    }
                }
                printf("%c %d; ",sen[j],amt);
                amt=0;
            }
            else
            {
                act=0;
            }
        }
    }
    return 0;
}

