#include <stdio.h>
#include <string.h>
int main()
{
    int c,j,i,q=0,p=0;
    char a[1000];
    char b[100];
    while(gets(a)&&a[0]!='#')
    {
        for(i=0;i<strlen(a)-1;i++)
        {
            if(a[i]==' '&&a[i+1]==' ')
            {
                c=i-1;
                for(j=i+2;j<=strlen(a);j++)
                    b[j-i-2]=a[j];
                b[j-i-1]='\0';
            }
        }
        for(i=0;i<=c;i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i+j]!=b[j])
                {
                    p=1;
                }
             }
             if(p==0)
                q++;
        }
        printf("%d\n",q);
    }
    return 0;
}
