#include<stdio.h>
#include<string.h>
int main()
{
    char a[1100],b[1100];
    while (1)
    {
        int x,y,s=0;
        scanf("%s",a);
        if (strcmp(a,"#")==0) break;
        scanf("%s",b);
        x=strlen(a);
        y=strlen(b);
        for (int i=0; i<x-y+1; i++)
            for (int l=0; l<y; l++)
            {
                if (a[i+l]!=b[l]) break;
                if (l==y-1)
                {
                    s++;
                    i+=y-1;
                }
            }
        printf("%d\n",s);
    }
    return 0;
}
