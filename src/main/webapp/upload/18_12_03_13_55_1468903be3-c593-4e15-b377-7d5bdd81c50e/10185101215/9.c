#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000],b[10000];
    int n,N,i,j,x=0,y=0,c,d;
    gets(a);
    N=strlen(a);
    scanf("%s",&b);
    n=strlen(b);
    for(i=0;i<N;i++)
   {
    if(a[i]==b[0])
    {
        for(j=1;j<n;j++)
          if(a[i+j]==b[j])
            x++;
    }
    if(x==n-1) {y++;d=i;}
    if(y==1) c=d;
        x=0;
   }
    if(y>0) printf("%s: %d time(s), first at %d",b,y,c);
    if(y==0)  printf("%s: 0 time(s), first at -1",b);
   return 0;
}