#include <stdio.h>
#include <string.h>

void prt_max(int n,char c[][40])
{
    int i,max=0;
    char temp[40];
    if(n==0)
        return;
    for(i=0;i<n;i++)
        if(strcmp(c[max],c[i])<0)
            max=i;
    printf("%s\n",c[max]);
    strcpy(temp,c[n-1]);
    strcpy(c[n-1],c[max]);
    strcpy(c[max],temp);
    prt_max(n-1,c);
}

int main()
{
    int n,i;
    scanf("%d",&n);
    char c[n][40];
    getchar();
    for(i=0;i<n;i++)
        gets(c[i]);
    prt_max(n,c);
    return 0;
}


