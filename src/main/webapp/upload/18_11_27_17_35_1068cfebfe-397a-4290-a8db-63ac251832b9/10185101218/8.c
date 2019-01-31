#include<stdio.h>

int main(void)
{
    int num,n,tm = 1,js1 = 0,big = 0;
    scanf("%d",&num);
    int data[num];
    int pl[num];
    for(n = 0;n < num;n++){
        scanf("%d",&data[n]);
    }
    for(n = 0;n < num;n++){
        if(data[n] == data[n+1]){
            tm++;
        }
        else{
            pl[js1] = tm;
            js1++;
            tm = 1;
        }
    }
    for(n = 0;n < js1;n++){
        if(pl[n] > big) big = pl[n];
    }
    printf("%d",big);
    return 0;
}
