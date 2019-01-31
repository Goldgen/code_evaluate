#include<stdio.h>
#include<math.h>

int main(void)
{
    char fst[10000] = {0};
    char snd[10000] = {0};
    char res[10000] = {0};
    int n = 0,m = 0,js = 0,size = 0;
    scanf("%s",fst);
    scanf("%s",snd);
    for(js = 0;js < 500;js++){
        if(fst[js] != 0) n++;
        if(snd[js] != 0) m++;
    }
    size = m>n?(m-1):(n-1);
    if(m>n){
        for(js = size;js >= 0;js--){
            if((js+n-m) < 0){
                res[js] = snd[js];
            }
            else
                res[js] += fst[js+n-m]+snd[js]-'0';
            if(res[js]-'0' > 9){
                res[js] -= 10;
                res[js-1]++;
                if(js == 0) printf("1");
            }
        }
    }
    else{
        for(js = size;js >= 0;js--){
            if((js+m-n) < 0){
                res[js] = fst[js];
            }
            else
                res[js] += fst[js]+snd[js+m-n]-'0';
            if(res[js]-'0' > 9){
                res[js] -= 10;
                res[js-1]++;
                if(js == 0) printf("1");
            }
        }
    }
    for(js=0;js <=size;js++){
        printf("%c",res[js]);
    }
    return 0;
}
