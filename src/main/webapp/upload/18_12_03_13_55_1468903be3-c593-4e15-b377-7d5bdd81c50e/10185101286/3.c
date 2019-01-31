#include<stdio.h>
#include<ctype.h>
int main()
{
    char s1[81];
    char s2[81];
    char s3[163];
    int n=0;
    int i=0;
    int j=0;
    int k,l;
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;i<100;++i)
    {
        if(s1[i]==0||s2[i]==0)
        {
            break;
        }
        else
        {
            s3[i*2]=s1[i];
            s3[i*2+1]=s2[i];
        }
    }
    ++i;
    if(s1[i-1]==0)
    {
        for(k=i*2-2;k<10000;++k)
        {
            if(s2[i-1]==0)
            {
                break;
            }
            s3[k]=s2[i-1];
            ++i;
        }
    }
    else
    {
        for(k=i*2-2;k<10000;++k)
        {
            if(s1[i-1]==0)
            {
                break;
            }
            s3[k]=s1[i-1];
            ++i;
        }
    }
    printf("%s",s3);
    return 0;
}
