#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b[100];
    int i, temp, Max=1, flag=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0,temp=1; i<n; i++)
    {
        if(b[i] == b[i-1])
        {
            temp ++;flag =1;
        }
        else
        {
            flag=0;temp=1;
        }
        if(temp>Max)
        {
           Max=temp;
        }
    }
    printf("%d\n",Max);
    return 0;
}
