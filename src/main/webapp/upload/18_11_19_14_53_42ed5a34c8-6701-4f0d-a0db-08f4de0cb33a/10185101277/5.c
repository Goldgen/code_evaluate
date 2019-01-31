#include<stdio.h>
int GCB(int a,int b){
if(b==0)return a;
GCB(b,a%b);
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d",GCB(a,b));
return 0;
}