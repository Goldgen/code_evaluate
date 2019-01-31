#include<stdio.h>
const int MIN=-1,MAX=0x7fffffff;
int main(){
	double a,maxn=MIN,minn=MAX;
	while(~scanf("%lf",&a))
		if(a>=0)maxn=maxn>a?maxn:a,minn=minn<a?minn:a;
		else break;
	printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",maxn,minn);
	return 0;
} 