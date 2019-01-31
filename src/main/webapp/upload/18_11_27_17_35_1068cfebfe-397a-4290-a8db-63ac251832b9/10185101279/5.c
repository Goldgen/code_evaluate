#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

int main(){
   int n;
   scanf("%d",&n);
   int data[n+1];
   for(int i=0;i<n;i++)
    scanf("%d",&data[i]);
   int k,x;
   scanf("%d %d",&k,&x);
   for(int i=n;i>k;i--){
    data[i]=data[i-1];
   }
   data[k]=x;
   for(int i=0;i<n+1;i++){
        if(i<n)
    printf("%d ",data[i]);
   else
    printf("%d",data[i]);
   }

	return 0;
}
