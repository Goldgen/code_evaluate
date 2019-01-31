#include<stdio.h>
#include<stdbool.h> 
#include<math.h>
int main()  //https://blog.csdn.net/pony_maggie/article/details/31042651 核心思想这里抄的。
{
	int nLength=0,a[10]={0};
	scanf("%d",&nLength);
	if(nLength!=0)
	{
	switch(nLength)  //code.mynereus 不能编译形如 a[i]=i; 的语句 
	{
	case 10:a[9]=9;case 9:a[8]=8;case 8:a[7]=7;case 7:a[6]=6;case 6:a[5]=5;
	case 5:a[4]=4;case 4:a[3]=3;case 3:a[2]=2;case 2:a[1]=1;case 1:	a[0]=0;	break;default:
    	break;
    }
	
	int mark=0,i=0,nEnd=(1<<nLength)-1,wei=0,mark0=0;
	bool bNullset=0;

	for(;mark<=nEnd;mark++)
	{
		bNullset=true;
		mark0=mark;
		for(wei=10;mark0>0;wei--)
		{
			if(mark0-pow(2,wei)>=0)
			{
				break;
			}
		}
		for(i=0;i<nLength;i++)
		{
			if(((1<<i)&mark)!=0&&(1<<i)!=pow(2,wei))
			{
				bNullset=0;
				printf("%d,",a[i]);
			}                                  //为什么code.mynereus看不懂\b和("%c",8)啊  。。。就为了这个地方又得多加接近10行代码。 
			if(((1<<i)&mark)!=0&&(1<<i)==pow(2,wei))
			{
				bNullset=0;
				printf("%d",a[i]);
			} 
		}
		if(mark!=0)
		printf("}");
		if(bNullset) //空集 
		{
			printf("{}");
		}
		if(mark!=nEnd)
		printf("\n{");
	}}
	else
	printf("{}");
	return 0;
} 