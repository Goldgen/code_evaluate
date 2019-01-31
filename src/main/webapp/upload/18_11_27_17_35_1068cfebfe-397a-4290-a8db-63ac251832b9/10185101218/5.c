#include<stdio.h>

int main(void)
{
    int num,adr,nem,js;
    scanf("%d",&num);
    int crsz[num+1];
    for(js = 0;js < num;js++){
        scanf("%d",&crsz[js]);
    }
    scanf("%d %d",&adr,&nem);
    for(js = num;js >= adr;js--){
        crsz[js+1] = crsz[js];
    }
    crsz[adr] = nem;
    for(js = 0;js < num+1;js++){
        if(js==num) printf("%d",crsz[js]);
        else          printf("%d ",crsz[js]);
    }
    return 0;
}
