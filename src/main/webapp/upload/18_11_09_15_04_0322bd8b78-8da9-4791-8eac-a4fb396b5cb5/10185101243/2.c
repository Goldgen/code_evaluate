

#include<stdio.h>

void ch_printed(char ch,int num);
int main(){
long long n,i,y,x;

scanf("%d",&n);

y=n-1;
{ch_printed(' ',y);
printf("1=1\n");
}
for(i=2;i<=n;i++){

    for(--y;y>0;y--){
    for(x=2;x<=i;x++){
    ch_printed(' ',y);
    printf("1+%d=%d+1",x);
    printf("\n");
    }
    }
    }


    return 0;
}
void ch_printed(char ch,int num){
int count;
for(count=1;count<=num;count++)
    putchar(ch);
}
