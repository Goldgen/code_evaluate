#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void f(void);
int main(){
    f();



return 0;
}
void f(void){
static int i=0;
static int a[100];
static int x;
scanf("%d",&x);
if(x>0){
    a[i]=x;
    i++;
    f();
}
if(i>1){
    printf("%d ",a[i-1]);
    i--;
}
if(i==1){
    printf("%d",a[i-1]);
    i--;
}
}
