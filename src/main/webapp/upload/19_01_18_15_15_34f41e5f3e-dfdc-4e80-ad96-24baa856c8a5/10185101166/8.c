#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int a,m,n,b;
    scanf("%d %d",&n,&m);
    char n1[32];
    itoa(n,n1, 10);
    a = strlen(n1);
    printf("%d ",a);
    
    
}