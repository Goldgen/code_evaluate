#include<stdio.h>
#include<string.h>
int Sum(int *p, int n)
{
	int i,sum=0;
	for(i=0;i<n;i++,p++){
		sum+=*p;
}
	printf("%d",sum);
}
int Min(int *p, int n){
    int i,min=2147483647;
	for(i=0;i<n;i++,p++){
		if(*p<min)
		min=*p;
}
    printf("%d ",min);
}
int main(){
	int n;
	scanf("%d",&n);
	int i,A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
}
	int *ptr=A;
	Min(ptr,n); 
	Sum(ptr,n);
}
