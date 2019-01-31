#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char A[100],B[100];

int main()
{
    int i,j,x=0;
    gets(A);
    i=strlen(A);
    for(j=0;j<i;j++)
    {
        B[j]=A[i-j-1];
    }
    for(j=0;j<i;j++)
    {
        if(A[j]!=B[j]) x=1;
    }
    if(x==1) printf("False");
    else printf("True");
    return 0;
}