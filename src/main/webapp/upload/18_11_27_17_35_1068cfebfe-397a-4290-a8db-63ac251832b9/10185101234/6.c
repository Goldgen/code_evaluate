#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int data[n];
    for(i=0; i<n; i++)
        scanf("%d",&data[i]);
    int key,j,k;
    scanf("%d",&key);
    int p;
    for(int i=0; i<n; i++)
    {
        if(data[i]==key)
            p=1;
    }
    for(j=0; j<n; j++)
    {
        if(data[j]==key)
        {
            for(k=j; k<=n; k++)
                data[k]=data[k+1];
            break;
        }

    }
    int m;
    if(p==1)
    {
        for(m=0; m<n-1; m++)
        {
            printf("%d",data[m]);
            if(m<n-2)
                printf(" ");
        }
    }
    else
        printf("ERROR");
    return 0;
}
