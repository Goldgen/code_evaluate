#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int data[n],s=1,i=1;
    for (int v=0; v<n; v++)
    {
        scanf("%d",&data[v]);
        if (v && data[v]==data[v-1]) i++;
        else i=1;
        s=(s>i)?s:i;
    }
    printf("%d",s);
    return 0;
}
