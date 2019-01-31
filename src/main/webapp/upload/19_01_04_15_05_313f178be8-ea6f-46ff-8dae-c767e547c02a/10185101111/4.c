#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
   char a[200]={0},c[200];
    gets(a);
    int lena=strlen(a);
    int m,n,x;
    for(x=0;x<lena;x++)
        c[x]=1;
    for(m=0;m<lena-1;m++){
        if(a[m]!=' '){
        for(n=m+1;n<lena;n++)
        if(a[n]==a[m]){
            a[n]=0;
            c[m]++;
        }
        }
    }
    int t;
    for(t=0;t<lena;t++)
        if(a[t]!=0&&a[t]!=' '){
        printf("%c %d; ",a[t],c[t]);
        }
}
