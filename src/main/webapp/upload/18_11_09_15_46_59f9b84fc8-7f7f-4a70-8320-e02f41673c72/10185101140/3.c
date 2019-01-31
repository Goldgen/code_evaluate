#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int s;int i;char le=64;int j;int h=1;
    for(s=0;s<n;s++){
        for(i=0;i<(n-1-s);i++){
            printf(" ");
        }
        le++;
        for(j=1;j<=(2*s+1);j++){
            printf("%c",le);
        }
        if(h<(2*n-1)){
            printf("\n");
            h++;
        }
    }
    for(s=n-2;s>=0;s--){
        for(i=0;i<(n-1-s);i++){
            printf(" ");
        }
        le++;
        for(j=1;j<=(2*s+1);j++){
            printf("%c",le);
        }
        if(h<(2*n-1)){
            printf("\n");
            h++;
        }
    }

    return 0;
}
