#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	int cnt=0;
	int array[1000],ans[1000];
	while(a>0)
	{   
	    array[cnt++]=a%10;
		a/=10;
	}
	b=b%cnt;
	for(int i=0;i<cnt;++i)
	{
	    if(i<cnt-b)	ans[i]=array[i+b];
	    else ans[i]=array[i+b-cnt];
	}	
	printf("%d ",cnt);
	for(int ii=0;ii<cnt;++ii)
	    printf("%d",ans[cnt-ii-1]);
}