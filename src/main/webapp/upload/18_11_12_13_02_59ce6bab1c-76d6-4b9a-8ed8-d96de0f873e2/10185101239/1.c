#include<stdio.h>
int mul(int x)
{
    int i = 0, j = 0;
	printf(" 1 * 1 =  1");
    for (i = 2; i <= x; i++)//行
    {       printf("\n");
        for (j = 1; j <= i; j++)//列
        {   if(i*j>=10)
            printf(" %d * %d = %d", j, i, i*j);
            else
            printf(" %d * %d =  %d", j, i, i*j);

        }

    }

}
int main()
{
    int a;
    scanf("%d", &a);
    mul(a);
    return 0;
}
