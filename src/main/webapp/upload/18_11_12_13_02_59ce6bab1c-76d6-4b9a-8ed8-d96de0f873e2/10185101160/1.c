#include<stdio.h>
void MPT(int n) //???????
{
    int i,/*?*/j,/*?*/k;/*?*/
    i = n;
    printf(" 1 * 1 =  1");//?1? 
    for(i=2;i<=n;i++)//?2-9? 
	{
		printf("\n");//??? 
		for(j=1;j<=i;j++)
        {
            printf(" %d * %d = ",j,i);//?? 
            k = i * j;//??? 
			if(k>9)
				printf("%d",k);
			else
				printf(" %d",k);
        }	
	}
}
int main()
{
	int n;
	scanf("%d",&n);
    MPT(n);//????????? 
	return 0;
}