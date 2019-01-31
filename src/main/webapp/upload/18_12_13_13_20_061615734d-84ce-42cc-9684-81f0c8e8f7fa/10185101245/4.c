#include <stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int i=0;i<T;i++)
    {
        char str[51]={'\0'};
        scanf("%s",str);
        for(int j=0;j<strlen(str);j++)
        {
            if(str[j]!='Z')
                str[j]+=1;
            else
                str[j]='A';
        }
        printf("case #%d: %s",i,str);
        if(i!=T-1)
            printf("\n");
    }
    return 0;
}

