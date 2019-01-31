#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void change(char a[],int x,int n);
int main()
{
    char s1[81];
    char s2[81];
    char temp[81];
    scanf("%s %s",s1,s2);
    for(int i=1;i<=strlen(s2);i++){
    strcpy(temp,s2);
    change(temp,i,strlen(temp));
    if((strcmp(temp,s1))==0)
    {
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
        return 0;

    }
    }
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);







	return 0;
}
void change(char a[],int x,int n){
int t[x];
for(int i=n-1,j=0;i>n-x-1;i--,j++)
    t[j]=a[i];
for(int i=n-1;i>=x;i--)
    a[i]=a[i-x];
for(int i=0;i<x;i++)
    a[i]=t[x-i-1];
}
