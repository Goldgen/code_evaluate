#include<stdio.h>
#include<ctype.h>
int print(int st,int ed){
int flag=0;
for(int i=st;i<=ed;i++){
if(isgraph(i)){
	if(i<100)
	{printf("%d      %c",i,i);
		   flag=1;
           printf("\n");}
	else
	{printf("%d     %c",i,i);
		   flag=1;
           printf("\n");}
           }
}
if(flag==0)
printf( "NONE");
}

int main(){
int a,b;
scanf("%d%d",&a,&b);
	print(a,b);
	return 0;
}