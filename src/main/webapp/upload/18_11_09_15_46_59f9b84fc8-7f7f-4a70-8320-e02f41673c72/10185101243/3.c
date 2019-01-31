#include <stdio.h>
#include <stdlib.h>
void ch_printed(char c,int n);
void ch_printed(char c,int n){
    for(int count=0;count<n;count++) putchar(c);
    }
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
     ch_printed(' ',n-i);
     ch_printed(64+i,2*i-1);
    puts("");
    }
    for(i=n+1;i<2*n-1;i++){
        ch_printed(' ',i-n);
        ch_printed(64+i,4*n-2*i-1);
        puts("");
    }
    if(i=2*n-1)
    {
        ch_printed(' ',i-n);
        ch_printed(64+i,4*n-2*i-1);
    }


    return 0;
}