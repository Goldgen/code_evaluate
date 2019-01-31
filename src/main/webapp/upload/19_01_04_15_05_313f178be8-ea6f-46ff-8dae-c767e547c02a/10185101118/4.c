#include<stdio.h>
#include<string.h>
int main()
{
    char a[210],c[210];
    int b[210]={0},t,s=0;
    fgets(a,209,stdin);
    t=strlen(a)-1;
    for (int i=0; i<t; i++)
    {
        int v;
        if (a[i]==' ') continue;
        for (v=0; v<s; v++)
            if (a[i]==c[v])
            {
                b[v]++;
                break;
            }
        if (v==s)
        {
            c[s]=a[i];
            b[s]++;
            s++;
        }
    }
    for (int i=0; i<s; i++)
        printf("%c %d; ",c[i],b[i]);
    return 0;
}
