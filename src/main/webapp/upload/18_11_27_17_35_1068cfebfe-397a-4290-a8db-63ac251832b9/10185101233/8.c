#include<stdio.h>
int main()
{
    int n;
    int a;
    int k=0;
    int l;
    int j=1;
    scanf("%d\r",&n);
    int data[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        data[i]=a;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(data[i]-data[i-1]==0)
            j++;
        if(data[i]-data[i-1]!=0)
        {
            k++;
            if(k>1)
            {
                if(j>l)
                    l=j;
                    j=1;
            }
            if(k==1)
            {   
                l=j;
                j=1;
            }
        }
    }
    printf("%d",l);
    return 0;
}
