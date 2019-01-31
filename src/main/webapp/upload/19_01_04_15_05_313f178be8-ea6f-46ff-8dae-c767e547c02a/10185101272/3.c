#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char a[1050],b[1050];
    int i,j,la,lb,ans=0;
    while(~scanf("%s",a)){
    if(a[0]=='#') break;
    scanf(" %s",b);
    ans=0;
    la=strlen(a);
    lb=strlen(b);
    for(i=0;i<=la-lb;i++){
        if(a[i]==b[0]){
            for(j=0;j<lb;j++)
                if(a[i+j]!=b[j]) break;
            if(j==lb) ans++,i+=j-1;
          //  i+=j;
        }
    }
    printf("%d\n",ans);
    }


    return 0;
}
