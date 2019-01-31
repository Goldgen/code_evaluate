#include<stdio.h>
int main(){
    int a,b,k,i,d;
    d=0;
    int remainder[30];
    
    scanf("%d",&a);
    k=0;
    while(a!=0){
        b=a/2;
        k++;
        remainder[k]=a-b*2;
        a=a/2;
    }
    for (i=k;i>=1;i--){
		printf("%d",remainder[i]);}
	return 0;
}
