#include <stdio.h>
int main(){

int n,i,del,flag;
scanf("%d",&n);
int arry[n],string[n-1];
   for(i=0;i<n;i++)
	   scanf("%d ",&arry[i]);
 scanf("%d",&del);
 for(i=0;i<n;i++){
 if(arry[i]==del){
flag=i;
for(i=0;i<flag;i++)
 string[i]=arry[i];
for(i=flag;i<n-1;i++)
	string[i]=arry[i+1];
	 for(i=0;i<n-1;i++)
		 if(i==0)
printf("%d",string[i]);
	 else
	 printf(" %d",string[i]);
return 0;
 }}
printf("ERROR");
return 0;

}