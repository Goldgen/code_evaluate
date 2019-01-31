#include<stdio.h>
int Sum(int num){
    if(num/10==0)
        return num;
    return num%10+Sum(num/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}
