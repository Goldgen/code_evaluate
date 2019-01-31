#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int a,m;
    char n[1024];
    scanf("%s",n);
    scanf("%d",&m);
    a=strlen(n);
    printf("%d ",a);
    /*for(int d=0;d<=a-1;d++)
        printf("%d ",n[d]);*/
	m=m%a;
    for(int i=1;i<=m;i++){
        int t=n[a-1];
        for(int b=a-1;b>=1;b--){
            n[b]=n[b-1];
        }
    n[0]=t;
    }
    for(int c=0;c<=a-1;c++)
        printf("%c",n[c]);
}