#include <stdio.h>
#include <math.h>
int main()
{
    int n,max=1;
    scanf("%d",&n);
    int arry[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    for (int i=0,num=1;i<n;i++)
    {
        if(arry[i]==arry[i+1])
        {
            num++;
        }
        else
        {
            num=1;
        }
        if(num>max)
            max=num;
    }
    printf("%d",max);

        return 0;
}