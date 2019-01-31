#include<stdio.h>

int main(void)
{
    int num,key,n,tm = 0;
    scanf("%d",&num);
    int data[num];
    int adr[num];
    for(n = 0;n < num;n++){
        scanf("%d",&data[n]);
    }
    scanf("%d",&key);
    for(n = 0;n < num;n++){
        if(data[n] == key){
            adr[tm] = n;
            tm++;
        }
    }
    if(tm != 0){
        for(n = 0;n < tm;n++){
            if(n == tm-1) printf("%d",adr[n]);
            else  printf("%d ",adr[n]);
        }
    }
    else printf("ERROR");
    return 0;
}
