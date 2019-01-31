#include <stdio.h>
#include <string.h>

int main()
{
    char s1[80],s2[80],str[160];
    int i,a,b,c=1,d,j,k;
    scanf("%s %s",s1,s2);
    a=strlen(s1);
    b=strlen(s2);
    if(a>b)
    {
        d=b;
        c=0;
    }
    else
    {
        d=a;
    }
    for(i=0;i<d;i++)
    {
            str[2*i]=s1[i];
            str[2*i+1]=s2[i];
    }
    if(c==1)
    {
        int m=2*a;
        for(j=a;j<b;j++)
        {
            str[m]=s2[j];
            m++;
        }
    }
    else
    {
        int n=2*b;
        for(k=b;k<a;k++)
        {
            str[n]=s1[k];
            n++;
        }
    }
    printf("%s",str);
    return 0;
}

