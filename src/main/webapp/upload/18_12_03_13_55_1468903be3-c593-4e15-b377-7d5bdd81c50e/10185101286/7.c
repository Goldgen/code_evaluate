#include<stdio.h>
int main()
{
    char sen[81]={0};
    char word[80]={0};
    int n=0;
    int l=0;
    int k=-1;
    int m=0;
    int i,j;
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
    for(i=0;i<=n;++i)
    {
        k++;
        if(sen[i]=='\0'||sen[i]==' ')
        {
            if(k>l)
            {
                l=k;
                k=-1;
                m=i-l;
            }
            else
                k=-1;
        }
        if(sen[i]=='\0')
            break;
    }
    for(i=m;i<=m+l-2;++i)
    {
        printf("%c",sen[i]);
    }
	printf("%c\n",sen[m+l-1]);
    return 0;
}
