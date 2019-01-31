#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,flag,shu;
    scanf("%d",&n);
    int arry[n],string[n+1];
    for(i=0;i<n;i++)
    scanf("%d ",&arry[i]);
    scanf("\n%d %d",&flag,&shu);
    for(i=0;i<flag;i++)
    string[i]=arry[i];
    string[flag]=shu;
   for(i=flag+1;i<n+1;i++)
    string[i]=arry[i-1];
    for(i=0;i<n+1;i++){
    if(i==0)
    printf("%d",string[i]);
    else
    printf(" %d",string[i]);}
    return 0;


}