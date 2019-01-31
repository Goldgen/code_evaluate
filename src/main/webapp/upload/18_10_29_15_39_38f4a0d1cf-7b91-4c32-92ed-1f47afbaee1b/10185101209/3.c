#include<stdio.h>
#include<stdbool.h>

int main()
{
    int num[500]={0},c=0,number=0;
    bool pri_num = true;

    for(int a=2;a<1000;a++){
        for(int b=2;b<a;b++){
            if(a%b==0)
                pri_num=false;
        }
        if(pri_num){
            num[c]=a;
            c++;
        }
        pri_num=true;
    }

    scanf("%d",&number);
    printf("%d",number);
    for(int a=0;a<500;a++){
        for(int b=0;b<500;b++){
            if(number==num[a]+num[b]&&num[a]!=0&&num[b]!=0&&num[a]<=num[b])
                printf("=%d+%d",num[a],num[b]);
        }
    }
    return 0;
}
