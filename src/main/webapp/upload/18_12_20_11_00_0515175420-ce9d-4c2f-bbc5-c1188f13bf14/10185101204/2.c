#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int is(char*** data,int x,int y)
{int k=0;
for(int i=0;data[x][y][i]!='\0';i++)
{k=isalpha(data[x][y][i]);
if(k==0)
return -1;}
return 1;}

void da(char*** data,int num[],int n)
{for(int i=0;i<n;i++)
{int a,d[201],k=0;
for(int j=0;j<=num[i];j++)
{a=is(data,i,j);
if(a==1)
{d[k]=j;
k++;}}
char ch[201];
for(int m=0;m<k-1;m++)
{for(int c=0;c<k-m-1;c++)
{if(strcmp(data[i][d[c+1]],data[i][d[c]])<0)
    {strcpy(ch,data[i][d[c+1]]);
    strcpy(data[i][d[c+1]],data[i][d[c]]);
    strcpy(data[i][d[c]],ch);}}}    }}

char*** Input(int n,int num[])
{char ***data=NULL;
char ch=0;
data=(char***)malloc(n*sizeof(char**));
for(int i=0;i<n;i++)
{data[i]=(char**)malloc(201*sizeof(char*));
for(int j=0;j<201;j++)
data[i][j]=(char*)malloc(201*sizeof(char));}
if(data!=NULL)
for(int j=0;j<n;j++)
{scanf("%s",data[j][0]);
ch=getchar();
for(int i=1;ch!='\n';i++)
{scanf("%s",data[j][i]);
num[j]=i;
ch=getchar();}}
return data;}

int main()
{int n;
scanf("%d",&n);
int num[n];
char ***p=NULL;
p=Input(n,num);
da(p,num,n);
for(int i=0;i<n;i++)
{printf("case #%d:\n%s",i,p[i][0]);
for(int j=1;j<=num[i];j++)
printf(" %s",p[i][j]);
if(i!=n-1)
printf("\n");}
free(p);
return 0;}
