#include <stdio.h>
#include <stdlib.h>
char** Input(int n)
{
    int i,j;
    char **sum;
    sum=(char**)malloc(n*80*sizeof(char*));
    for(i=0;i<n;i++)
    sum[i]=(char*)malloc(80*sizeof(char));
    if(sum!=NULL)
        for(j=0;j<n;j++)
            gets(sum[j]);
    return sum;
}
void Free(char**a, int n)
{
    int i;
    for(i=1;i<=n;++i)
        free(a);
}
void Sort(char **a, int n)
{
    char *temp[1];
    int i,j;
    for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
            {
                if(a[j][0]>a[j+1][0])
                {
                    *temp[0] = a[j];
                    a[j] = a[j+1];
                    a[j+1] = *temp[0];
                }
            }
        }
}
int main()
{
    char** p;
    int n,i;
    scanf("%d",&n);
    getchar();
    p = Input(n);
    Sort(p,n);
    for(i=0; i<n; i++)
        printf("%s\n",p[i]);
    Free(p,n);
    return 0;
}