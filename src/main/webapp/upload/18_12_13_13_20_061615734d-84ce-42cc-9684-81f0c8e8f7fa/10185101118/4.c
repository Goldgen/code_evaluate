#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",*p=s;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        char a[55],d;
        if (0==i) d=getchar();
        fgets(a,55,stdin);
        int t=strlen(a);
        printf("case #%d: ",i);
        for (int v=0; v<t-1; v++)
        {
            if (a[v]=='Z') printf("A");
            else printf("%c",*(p+a[v]-'A')+1);
        }
        if (i!=n-1) printf("\n");
    }
    return 0;
}

