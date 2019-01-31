#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001];char b[1001];int m;int n;int i,j;int k=0;int l=0;
    for( ; ; )
    {
        scanf("%s",a);
        if(strcmp(a,"#")==0)
            return 0;
        scanf("%s",b);
        m=strlen(a);
        n=strlen(b);
        for(i=0;i<m;++i)
        {
            if(a[i]==b[0])
            {
                k=0;
                for(j=1;j<n;j++)
                {
                    if(a[i+j]!=b[j])
                        k=1;
                }
                if(!k)
                {
                    ++l;
                    i=i+n-1;
                }
            }
        }
        printf("%d\n",l);
    }
}
