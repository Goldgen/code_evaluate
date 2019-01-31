#include<stdio.h>
int fanzhuan(int n,int t){
    t = t * 10 + n % 10;
    n /= 10;
    if(n>0)return fanzhuan(n,t);
    return t;
}
int main()
{
    int n, t = 0;
    scanf("%d", &n);
    if(n<=0)return 0;
    else t=fanzhuan(n,t);
    printf("%d", t);
    return 0;
}