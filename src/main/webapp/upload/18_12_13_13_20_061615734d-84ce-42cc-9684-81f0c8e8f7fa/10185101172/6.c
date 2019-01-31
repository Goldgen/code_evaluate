#include <stdio.h>
#include <string.h>

void rotate(int* p, int n, int m);

int main() {
    int n,m=0;
    scanf("%d %d",&n,&m);
    int str[n];
    int i,j=0;
    for(i=0;i<n;i++)
        scanf("%d",&str[i]);
    int s[m];
    for(i=n-m,j=0;i<n;i++,j++)
        s[j]=str[i];
    for(i=0;i<n-m;i++)
        str[i+m]=str[i];
    for(i=0;i<m;i++)
        str[i]=s[i];
    for(i=0;i<n;i++)
    {
        printf("%d",str[i]);
        if(i!=n-1)
            printf(" ");
    }
    return 0;
}


