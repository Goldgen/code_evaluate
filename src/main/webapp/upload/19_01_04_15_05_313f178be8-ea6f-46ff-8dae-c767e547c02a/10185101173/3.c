#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1001],b[1001],arr[1001];
    int n=0,i=0,j=0,t=0;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"#")==0)
            break;
        scanf("%s",b);
        n=strlen(b);
        for(i=0;i<strlen(a)-n+1;++i)
        {
            for(j=0;j<n;++j)
            {
                arr[j]=a[j+i];
            }
            arr[j]='\0';
            if(strcmp(arr,b)==0)
            {
                ++t;
                i+=n-1;
            }
        }
        printf("%d\n",t);
        t=0;
        for(i=0;i<n;++i)
        {
            arr[i]='\0';
        }
    }
    return 0;
}
