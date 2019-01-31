#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Search(char **str1,char **str2,int n)
{
    int len,i,j,k,l,x[n],a;
    for(i=0;i<n;i++)
    {
        len=strlen(str2[i]);
        x[i]=0;
        for(j=0;;j+=len)
        {
            a=1;
            if(!str1[j])
                break;
            for(k=j,l=0;k<j+len;k++,l++)
            {
                if(str1[j]!=str2[l])
                {
                    a=0;
                    break;
                }
            }
            if(a==0)
                x[i]++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d",x[i]);
            else
        printf("%d\n",x[i]);
    }
}

int main()
{
    char **str1,**str2;
    int a;
    str1=(char**)malloc(sizeof(char*)*50);
    str2=(char**)malloc(sizeof(char*)*50);
    for(a=0;a<50;a++)
    {
        *str1=(char*)malloc(sizeof(char)*100);
    }
    for(a=0;a<50;a++)
    {
        *str1=(char*)malloc(sizeof(char)*100);
    }
    char ch;
    int i;
    for(i=0;;i++)
    {
        scanf("%s",str1[i]);
        ch=getchar();
        if(ch==' ')
            scanf("%s",str2[i]);
        if(str1[i][0]=='#')
            break;
    }
    str1[i]='\0';
    str2[i]='\0';
    int n=i-1;
    Search(str1,str2,n);
    for(a=0;a<50;a++)
    {
        free(*str1);
    }
    for(a=0;a<50;a++)
    {
        free(*str2);
    }
    free(str1);
    free(str2);
    return 0;

}
