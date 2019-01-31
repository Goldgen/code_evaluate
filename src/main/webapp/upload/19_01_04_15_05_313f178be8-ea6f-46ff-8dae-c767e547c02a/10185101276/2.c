#include<stdio.h>
int main()
{
    long long int a = 0,b = 0,c = 0;
    long long int n = 0;
    long long int i = 0,d = 1;
    scanf("%lld+%lld=%lld",&a,&b,&c);
    if(a!=0&&b!=0&&(c-b)%a == 0)
    {
        n = (c-b)/a;}
    else if(b!=0&&a!=0&&(c-a)%b == 0)
    {
        n = (c-a)/b;
        printf("-");}
    if(a==0&&b!=0){
        n = c/b;
        printf("-");}
    else if(b==0&&a!=0){
        n = c/a;}
    else if(b==0&&a==0){
        n = 0;
        printf("0\n");
        return 0;}
    for(i=1; ; i++){
        if(n == d){
            break;
        }
        else d*=10;}
    printf("%lld\n",i-1);
    return 0;
}
