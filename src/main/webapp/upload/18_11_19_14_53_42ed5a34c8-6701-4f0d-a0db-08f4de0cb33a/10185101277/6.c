#include<stdio.h>
int fibonacci(int n){
if(n==0) return 0;
else if(n==1) return 1;
return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
int m;
scanf("%d",&m);
printf("%d",fibonacci(m));
return 0;
}
