#include<stdio.h>
#include<string.h>
void f(char *a[],int n)
{
     char *temp;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(strcmp(a[i],a[j])>0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d\n",&n);
    char a[n][30];
    char *ptstr[n];
    for(int i=0;i<n;++i)
        gets(a[i]);
    for(int i=0;i<n;++i)
        ptstr[i]=a[i];
   f(ptstr,n);
    for(int i=n-1;i>=0;--i)
        puts(ptstr[i]);
    return 0;
}
