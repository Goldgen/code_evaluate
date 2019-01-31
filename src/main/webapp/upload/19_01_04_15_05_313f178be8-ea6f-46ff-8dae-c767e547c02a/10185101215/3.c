#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
 char a[100];
 while(scanf("%s",a)!=EOF&&a[0]!='#')
 {
    char b[100];
    scanf("%s",b);
    int i,x,j,d=0,e=0,y;
    x=strlen(b);
    y=strlen(a);
    for(i=0;i<=y;)
    {
        d=0;
            for(j=0;j<x;j++)
            {
                if(a[i+j]==b[j]) d++;
            }
            if(d==x) {++e;i=i+x;}
		else i++;
	}
    printf("%d\n",e);
 }
 return 0;
}