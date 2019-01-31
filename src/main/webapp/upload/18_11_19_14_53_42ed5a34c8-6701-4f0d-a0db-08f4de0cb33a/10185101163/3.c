#include<stdio.h>
void A(int n){
    static int Arr[100],t=0;
    int i,k;
    while(n>0){
    Arr[++t] = n;
    scanf("%d",&k);
    A(k);break;
    }
if(n ==0||n<0){
      for(i=t;i>=1;i--){
        printf("%d",Arr[i]);
if(i>1)  printf(" ");
 }}}
int main(){
  int n;
  scanf("%d",&n);
  A(n);
}