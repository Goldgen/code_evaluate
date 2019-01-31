#include<stdio.h>
#include<string.h>
int main(){
	int a,i=0,b,j;
	char ch[100];
	scanf("%d",&a);
	while(a>=10){
		b=a%10;
		ch[i]=b+'0';
		i++;
		a=a/10;
	}
   if(a<10)
  {
	  ch[i]=a+'0';
  }
	for (j=i;j>=0;j--){
            printf("%c",ch[j]);
	}
	return 0;
}
