#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1111], b[1111], n;
    int c[1111], d[1111]={0};
    gets(a);
    gets(b);
    int lena,lenb;
    lena=strlen(a);
    lenb=strlen(b);
    if(lena>lenb){
        for(int i=lena-1; i>lena-lenb-1; i--)
            b[i]=b[i-lena+lenb];
        for(int i=0; i<lena-lenb; i++)
            b[i]='0';
        n=lena;
    }
    if(lena<lenb){
        for(int i=lenb-1; i>lenb-lena-1; i--)
            a[i]=a[i-lenb+lena];
        for(int i=0; i<lenb-lena; i++)
            a[i]='0';
        n=lenb;
    }
	if(lena==lenb) n=lena;
    for(int i=n-1; i>=0; i--){
        c[i]=((a[i]-'0')+(b[i]-'0')+d[i+1])%10;
        d[i]=((a[i]-'0')+(b[i]-'0')+d[i+1])/10;
    }
    if(d[0]!=0) printf("%d", d[0]);
    for(int i=0; i<n; i++)
        printf("%d", c[i]);
    return 0;

}
