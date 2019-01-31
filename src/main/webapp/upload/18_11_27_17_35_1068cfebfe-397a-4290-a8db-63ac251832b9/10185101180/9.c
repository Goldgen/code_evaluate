#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,j,k,m,n,x;
    i=j=0;
    int first[100]={0},second[100]={0},co[100]={0},result[101]={0};
    while(first[i]=getchar()!='\r')
    {
        i++;
    }
    i=i-1;
    while(second[j]=getchar()!='\r')
    {
        j++;
    }
    j=j-1;
    if(i>j)
        n=i;
    else
        n=j;
    for(k=0;k<=n;k++)
    {
        if(k==0)
        x=first[k]+second[k];
        else
        x=first[k]+second[k]+co[k-1];
        result[k]=x%10;
        co[k]=x/10;
    }
    result[n+1]=co[n];
    if(result[n+1]==0)
    {
        for(m=n;m>=0;m--)
        {
            printf("%d",result[m]);
        }
    }
    else
    {
        for(a=n+1;a>=0;a--)
        {
            printf("%d",result[a]);
        }
    }
    return 0;
}