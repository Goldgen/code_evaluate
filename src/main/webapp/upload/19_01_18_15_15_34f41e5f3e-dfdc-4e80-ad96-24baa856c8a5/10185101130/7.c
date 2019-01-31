#include<stdio.h>

int main(void)
{
    int num;
    int j=0;
	int m;
    scanf("%d",&num);
    for(int i=0;i<32;++i)
    {
        m=(num>>i)&1;
		if(m==1)
          j++;
    }
    printf("%d",j);
    return 0;
}
