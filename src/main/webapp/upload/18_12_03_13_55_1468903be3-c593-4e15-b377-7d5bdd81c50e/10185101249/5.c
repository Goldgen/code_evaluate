#include <stdio.h>
#include <string.h>
int bool(char a[100],char b[100],int i)
{
    int m,p,q,r;
    for(q=0;q<i;q++)
    {
        m=1;
        for(p=0;p<i;p++)
        {
            r=p+q;
            if(r>=i)
               r-=i;
            if(a[p]!=b[r])
               m=-1;
        }
        if(m==1)
            return 1;
    }
    return 0;
}
int main()
{
    char a[100];
    char b[100];
    scanf("%s %s",a,b);
    if(strlen(a)!=strlen(b))
        printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
    else
    {
        if(bool(a,b,strlen(a))==0)
             printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
        else
             printf("\"%s\" is a rotation of \"%s\"",a,b);
    }
    return 0;
}
