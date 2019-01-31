#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,j,m,n,tem,t;
    scanf("%d",&n);
    printf("{}");
    m=pow(2,n);
    for(i=1;i<m;i++)
    {
        tem=i;
        printf("\n{");
        for(j=0;j<=i&&tem!=0;j++,tem/=2)
        {
            t=tem%2;
			if(t==1) {printf("%d",j);break;}
        }
        for(j++,tem/=2;j<=i&&tem!=0;j++,tem/=2)
        {
            t=tem%2;
			if(t==1) printf(",%d",j);
        }
        printf("}");
    }
    return 0;
}