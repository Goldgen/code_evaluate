#include<stdio.h>
int SumNums(int n)
{
if (n<10)
return n;
int res = 0;
res = (n%10)+SumNums(n/10);
return res;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",SumNums(n));
    return 0;
}
