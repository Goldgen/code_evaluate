#include <stdio.h>
int main()
{
int i,n,c;
int index=1;
scanf("%d",&n);
int arr[100];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int a,b;
scanf("%d",&b);
for(a=0;a<n;a++){
     if(arr[a]==b){
	 printf("%d",a);
	 index++;break;}
}
for(c=a+1;c<n;c++){
     if(arr[c]==b){
	 printf(" %d",c);
	 index++;}
}
if(index==1)
    printf("ERROR");
return 0;
}