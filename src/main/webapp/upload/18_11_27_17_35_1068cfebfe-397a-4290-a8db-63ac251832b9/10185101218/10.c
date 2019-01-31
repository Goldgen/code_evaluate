#include<stdio.h>

int main(void)
{
    int num,js1,js2,js3 = 1,js4 = 0,mid = 0;
    scanf("%d",&num);
    int data[num];
    for(js1 = 0;js1 < num;js1++){
        scanf("%d",&data[js1]);
    }
    while(js4 != js3){
        js4 = js3;
        for(js2 = 0;js2 < num-1;js2++){
            if(data[js2] > data[js2+1]){
                mid = data[js2];
                data[js2] = data[js2+1];
                data[js2+1] = mid;
                js3++;
            }
        }
    }
    for(js1 = 0;js1 < num;js1++){
        if(js1 == num-1)
            printf("%d",data[js1]);
        else
            printf("%d ",data[js1]);
    }
    return 0;
}
