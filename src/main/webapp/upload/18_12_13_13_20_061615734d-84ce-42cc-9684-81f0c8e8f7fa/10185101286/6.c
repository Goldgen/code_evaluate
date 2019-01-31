#include<stdio.h>
void rotate(int* p, int n, int m);
int main()
{
    int num[30]={0};
    int area,number,i;
    scanf("%d %d",&number,&area);
    for(i=0;i<number;++i)
    {
    scanf("%d",&num[i]);
    }
    rotate(num,number,area);
    for(i=0;i<number-1;++i)
    {
    printf("%d ",num[i]);
    }
    printf("%d",num[number-1]);
    return 0;
}
void rotate(int* p, int n, int m)
{
int k=0;
int j;
int num1[30]={0};
for(j=m;j<m+n;++j)
{
num1[j]=p[k];
++k;
}
for(j=0;j<m;++j)
{
num1[j]=num1[n+j];
}
for(j=0;j<n;++j)
{
p[j]=num1[j];
}
}