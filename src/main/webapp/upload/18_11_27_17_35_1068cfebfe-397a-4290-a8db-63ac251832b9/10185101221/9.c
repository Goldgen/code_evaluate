#include <stdio.h>
#include <string.h>
int main(){
	char arr1[1000];
	char arr2[1000];
	scanf("%s%s",arr1,arr2);
	int n1=strlen(arr1),n2=strlen(arr2),s=0;
	int n= n1>n2? n1:n2;
	int sum[n];
	if(n1<n){
    for(int i=n-1;i>=n-n1;i--)
        arr1[i]=arr1[i+n1-n];
    for(int i=0;i<n-n1;i++)
        arr1[i]='0';
    }
    if(n2<n){
    for(int i=n-1;i>=n-n2;i--)
        arr2[i]=arr2[i+n2-n];
    for(int i=0;i<n-n2;i++)
        arr2[i]='0';
    }

    for(int i=n-1;i>=0;i--){
        int a=arr1[i]-'0';
        int b=arr2[i]-'0';
        if(a+b+s<10){
            sum[i]=a+b+s;
            s=0;}
        else{
            sum[i]=a+b+s-10;
            s=1;
        }
    }
    if(s==1)
        printf("%d",s);
    for(int i=0;i<n;i++)
        printf("%d",sum[i]);
	return 0;

}
