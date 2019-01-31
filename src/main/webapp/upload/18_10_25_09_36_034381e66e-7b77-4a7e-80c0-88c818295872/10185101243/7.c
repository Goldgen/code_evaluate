#include<stdio.h>

void ch_printed(char ch,int num);//定义"打印字符"函数，作用是打印指定数目的字符
int main(){
long long n,i,x,y;//n是读入的数也是最后一行*的数目，i是行数，x是总行数，y是第一个*前的空格数
scanf("%d",&n);
x=(n+1)/2;//计算总行数
y=(n-1)/2;//计算第一行第一个*前的空格数
{ch_printed(' ',y);
printf("*\n");


}//打印第一行
for(i=2;i<x;i++){    //从第二行开始计数
    for(--y;y>0;y--){
    ch_printed(' ',y);
    putchar('*');
    ch_printed(' ',n-2*y-2);
    printf("*\n");
    }
    }
    ch_printed('*',n);//打印最后一行
    
    return 0;
}
void ch_printed(char ch,int num){
int count;
for(count=1;count<=num;count++)
    putchar(ch);
}
