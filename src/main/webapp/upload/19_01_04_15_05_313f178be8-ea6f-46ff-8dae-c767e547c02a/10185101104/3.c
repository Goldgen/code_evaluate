#include <stdio.h>
#include <string.h>

int main()
{
    char a[1005]={0},b[1005]={0};
    scanf("%s",a);
    while(strcmp(a,"#")!=0)
    {
        int n=0,i=0;
        scanf("%s",b);
        while(i<strlen(a))
        {
            if(strncmp(a+i,b,strlen(b))==0)
            {
                n++;
                i+=strlen(b);
            }
            else
                i++;
        }
        printf("%d\n",n);
        scanf("%s",a);
    }
    return 0;
}


