#include <stdio.h>
void cheng(int a){
    int i;
    for(i=1;i<=a;i++)
        printf(" %d * %d = %2d",i,a,i*a);

}
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1&&n<=9){
    printf(" 1 * 1 =  1");
	for(i=2;i<=n;i++)
    {
        printf("\n");
        cheng(i);
    }
    }
return 0;
}
