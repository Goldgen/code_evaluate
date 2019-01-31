#include <stdio.h>
int factorial(int a)//求阶乘函数
{
    return (a==1)?1:a*factorial(a-1);
}
int  permutation(int b,int c)//求排列数函数
{
	int t;
    if(b==0||c==0||b==c)
       t = 1;
    else
    t = factorial(c)/(factorial(b)*factorial(c-b));
	return t;
}
int main()//利用杨辉三角排列数上的规律求解
{
    int n;
    scanf("%d",&n);
    int p,q;
    p = 0;
    q = 0;
    while(p<=n-1)
    {
        while (q<=p)
        {
            if(q<p)
                printf("%d ",permutation(q,p));
            else
                printf("%d",permutation(q,p));
            q++;
        }
        if(p!=n-1)
        printf("\n");
        p++;
        q = 0;
    }
     return 0;

}