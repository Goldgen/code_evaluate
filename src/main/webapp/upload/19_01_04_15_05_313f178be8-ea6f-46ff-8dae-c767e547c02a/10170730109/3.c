#include<stdio.h>
#include<string.h>
int main(){
    char stra[1001],strb[1001];
    int i=0,j=0,count=0,yes=1;
    scanf("%s %s",stra,strb);
    while(stra[0]!='#'){
        count=0;
        for(i=0;i<strlen(stra);){
            yes=1;
            for(j=0;j<strlen(strb);i++,j++){
                if(stra[i]!=strb[j]){
                    yes=0;
                    i++;
                    break;
                }
            }
            if(yes==1) count++;
        }
        printf("%d\n",count);
        scanf("%s %s",stra,strb);
    }
    return 0;
}